#pragma once
#include "MovieSubtitles.h"
#include "SubtitlesException.h"
#include <string>
#include <regex>


void MicroDvdSubtitles::ShiftAllSubtitlesBy(int offset_in_micro_seconds, int frame_per_second, std::istream *in, std::ostream *out)
{

	std::string line;
	std::regex re("\\{(\\d{1,6})\\}\\{(\\d{1,6})\\}(.*)"); // wyra�enie regularne
	std::smatch match; // dopasowanie
	int frStart, frStop, prevfrStart=0;
	std::string subText;
	int lineNo = 0;


	while (!in->eof()) {
		lineNo++; // nr odczytywanej linii

		// wy�wietl + po ka�dych przetworzonych 10 liniach
		if (lineNo % 10 == 0) {
			std::cout << "+";
		}

		// odczytaj kolejn� lini� z pliku
		getline(*in, line);
		
		// sprawd� poprawno�� odczytanej linii (dopasuj do wzorca)
		if (!std::regex_search(line, match, re)) {
			// linia niepoprawna - zg�o� wyj�tek
			throw InvalidSubtitleLineFormat(lineNo, line, "InvalidSubtitleLineFormat");
		}

		// odczytana linia poprawna - odczytaj dane z linii
		frStart = stoi(match[1]) + frame_per_second;
		frStop = stoi(match[2]) + frame_per_second;
		subText = match[3];

		// czy END before START
		if (frStop < frStart) {
			throw SubtitleEndBeforeStart(lineNo, line, "SubtitleEndBeforeStart");
		}

		// czy start < 1
		if (frStart < 1) {
			throw NegativeFrameAfterShift(lineNo, line, "NegativeFrameAfterShift");
		}

		// kolejny napis przed wcze�niejszym
		if (frStart < prevfrStart) {
			throw OutOfOrderFrames(lineNo, line, "OutOfOrderFrames");
		} else {
			prevfrStart = frStart;
		}

		// wszystko sprawdzone - zapisz lini� do pliku
		*out	<< "{" << frStart << "}"
				<< "{" << frStop << "}"
				<< subText
				<< std::endl; // zapisz do pliku
	}
}
