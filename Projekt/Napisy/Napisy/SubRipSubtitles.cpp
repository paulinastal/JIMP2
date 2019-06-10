#pragma once
#include "MovieSubtitles.h"
#include "SubtitlesException.h"
#include <string>
#include <regex>
#include <stdio.h>



void SubRipSubtitles::ShiftAllSubtitlesBy(int offset_in_micro_seconds, int frame_per_second, std::istream* in, std::ostream* out)
//void SubRipSubtitles::ShiftAllSubtitlesBy(int, int, std::istream*, std::ostream*)

{
	std::string line; 
	int mode = 1; // 1 - nr, 2 - czas, 3 - tekst napis�w
	std::regex reNo("^\\d+$"); // wyra�enie regularne - nr napis�w
	std::regex reTime("^(\\d\\d:\\d\\d:\\d\\d,\\d\\d\\d) --> (\\d\\d:\\d\\d:\\d\\d,\\d\\d\\d)$"); // wyra�enie regularne - czas
	std::smatch match; // dopasowanie
	int lineNo = 0;
	int subNo; // nr napisu
	int subNoOK = 1; // poprzedni nr napisu
	int msecFrom=0, msecTo=0;


	while (!in->eof()) {
		lineNo++; // nr odczytywanej linii

		// wy�wietl + po ka�dych przetworzonych 10 liniach
		if (lineNo % 10 == 0) {
			std::cout << "+";
		}

		// odczytaj kolejn� lini� z pliku
		getline(*in, line);

		// je�li linia pusta to czytaj nast�pn�
		if (line.length()==0) {
			*out << std::endl;
			mode = 1; // po pustej linii ma by� nr
			continue;
		}

		switch (mode) {
			case 1: // sprawd�, czy nr poprawny
					if (!std::regex_search(line, match, reNo)) {
						// linia niepoprawna - zg�o� wyj�tek
						throw InvalidSubtitleLineFormat(lineNo, line, "InvalidSubtitleLineFormat");
					}
					// sprawd� kolejno�� numer�w napis�w
					subNo = stoi(match[0]);
					if (subNo != subNoOK) {
						throw OutOfOrderFrames(lineNo, line, "OutOfOrderFrames");
					}
					// zapisz nr do pliku
					*out << subNo << std::endl;
					mode = 2;	// kolejna linia w pliku - czas wy�wietlania
					subNoOK++;	// kolejny nr napis�w
					break;
			case 2: // sprawd�, czy czas poprawny
					if (!std::regex_search(line, match, reTime)) {
						// linia niepoprawna - zg�o� wyj�tek
						throw InvalidSubtitleLineFormat(lineNo, line, "InvalidSubtitleLineFormat");
					}
					// przelicz czas na milisekundy
					msecFrom = stime2msec(match[1]) + offset_in_micro_seconds;
					msecTo = stime2msec(match[2]) + offset_in_micro_seconds;
					// czy END before START
					if (msecFrom > msecTo) {
						throw SubtitleEndBeforeStart(lineNo, line, "SubtitleEndBeforeStart");
					}
					// czy pocz�tek czasu < 0
					if (msecFrom < 0) {
						throw NegativeFrameAfterShift(lineNo, line, "NegativeFrameAfterShift");
					}

					// wszystko OK - zapis czasy do pliku
					*out << msec2stime(msecFrom) << "-->" << msec2stime(msecTo) << std::endl;
					mode = 3;	// kolejna linia w pliku - tekst napis�w
					break;
			case 3: // zapisz tekst napisu do pliku
					*out << line << std::endl;
					break;
		}

	}

}

int SubRipSubtitles::stime2msec(std::string stime)
{
	std::regex re("(\\d\\d):(\\d\\d):(\\d\\d),(\\d\\d\\d)"); // wyra�enie regularne - czas
	std::smatch match; // dopasowanie
	int msec = 0;

	// podziel na godziny minuty, sekunty i milisekundy
	std::regex_search(stime, match, re);
	msec += stoi(match[1]) * 3600000;	// godziny w milisekundach
	msec += stoi(match[2]) * 60000;		// minuty w milisekundach
	msec += stoi(match[3]) * 1000;		// sekundy w milisekundach
	msec += stoi(match[4]);

	return msec;
}

std::string SubRipSubtitles::msec2stime(int msec)
{
	char buffer[100];
	// oblicz liczb� godzin, minut, sekund, milisekund
	int hours = msec / 3600000;
	int mins = (msec - hours * 3600000) / 60000;
	int secs = (msec - mins * 60000) / 1000;
	int milis = msec % 1000;

	// utw�rz zapis tekstowy czasu
	snprintf(buffer, 100, "%02d:%02d:%02d,%03d", hours, mins, secs, milis);
	std::string s(buffer); // konwersja char[] na string

	return s;
}

