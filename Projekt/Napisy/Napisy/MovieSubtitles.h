#pragma once
#include <iostream>

// klasa abstrakcyjna
class MovieSubtitles
{
	public:
        virtual void ShiftAllSubtitlesBy(int, int, std::istream*, std::ostream*) =0;
};


// klasa dla przesuni�cia napis�w w formacie SUB
class MicroDvdSubtitles : public MovieSubtitles
{
	public:
		void ShiftAllSubtitlesBy(int, int, std::istream*, std::ostream*);

};


// klasa dla przesuni�cia napis�w w formacie SRT
class SubRipSubtitles : public MovieSubtitles
{
	public:
		void ShiftAllSubtitlesBy(int, int, std::istream*, std::ostream*);
		int stime2msec(std::string);
		std::string msec2stime(int msec);
};


