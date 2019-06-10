#pragma once
#include <string>

class SubtitlesException
{
	private:
		int lineNo;				// nr linii
		std::string lineText;	// tekst w linii
		std::string message;	// rodzaj b³êdu (nazwa klasy)
	public:
		SubtitlesException(int no, std::string text, std::string msg);
		int getNo();
		std::string getText();
		std::string getMsg();
};


class InvalidSubtitleLineFormat : public SubtitlesException
{
	public:
		InvalidSubtitleLineFormat(int no, std::string text, std::string msg);
};


class SubtitleEndBeforeStart : public SubtitlesException
{
	public:
		SubtitleEndBeforeStart(int no, std::string text, std::string msg);
};


class NegativeFrameAfterShift : public SubtitlesException
{
	public:
		NegativeFrameAfterShift(int no, std::string text, std::string msg);
};


class OutOfOrderFrames : public SubtitlesException
{
public:
	OutOfOrderFrames(int no, std::string text, std::string msg);
};
