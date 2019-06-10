#include <iostream>
#include <fstream>
#include "MovieSubtitles.h"
#include "SubtitlesException.h"
#include <string>

int main(int argc, char* argv[]) {

	std::string fnamein, fnameout;
	int shift;

	// uruchom program z parametrami
	// pierwszy parametr to nazwa programu, drugi to plik, a trzeci to przesuni�cie
	if (argc != 3) {
		// wy�wietl podpowied�, jak uruchomi� program
		std::cout << "URUCHOMIENIE PROGRAMU:" << std::endl
			<< "Dla MicroDVD: napisy.exe plik.sub przesuniecie_w_klatkach" << std::endl
			<< "Dla SubRip:   napisy.exe plik.srt przesuniecie_w_milisec" << std::endl;
		return 0;
	}
	else {
		// odczytaj jaki plik (format) przeusn�� i o ile
		fnamein = argv[1];					// nazwa pliku z napisami do konwersji
		fnameout = "shifted-" + fnamein;	// nazwa pliku z napisami po konwersji
		shift = std::stoi(argv[2]);			// przesuni�cie w klatkach lub milisekundach
		// wy�wietl info co b�dzie wykonywane
		std::cout << fnamein << " --> " << fnameout << " | shift: " << shift << std::endl;
	}

	// otw�rz pliki
	std::ifstream fin(fnamein);
	std::ofstream fout(fnameout);

	// przesu� napisy
	// gdy pojawi� si� b��dy, przechwy� wyj�tki
	try {

		// przesu� napisy w pliku .sub (microDVD)
		if (fnamein.find(".sub") != std::string::npos) {
			MicroDvdSubtitles sub;
			sub.ShiftAllSubtitlesBy(0, shift, &fin, &fout);
		}

		// przesu� napisy w pliku .srt (SubRip)
		if (fnamein.find(".srt") != std::string::npos) {
			SubRipSubtitles srt;
			srt.ShiftAllSubtitlesBy(shift, 0, &fin, &fout);
		}
	}
	catch (SubtitlesException e) {
		// jest b��d - zr�b co� !!!
		std::cout << std::endl;
		std::cout << "ERROR in line " << e.getNo() << " | " << e.getMsg() << std::endl;
		std::cout << e.getText() << std::endl;
	}

	// zamknij pliki
	fin.close();
	fout.close();

    return 0;
}