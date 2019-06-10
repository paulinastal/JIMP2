#include <string>
#include "SubtitlesException.h"


SubtitlesException::SubtitlesException(int no, std::string text, std::string msg)
{
	lineNo = no;
	lineText = text;
	message = msg;
}

int SubtitlesException::getNo()
{
	return lineNo;
}

std::string SubtitlesException::getText()
{
	return lineText;
}

std::string SubtitlesException::getMsg()
{
	return message;
}

InvalidSubtitleLineFormat::InvalidSubtitleLineFormat(int no, std::string text, std::string msg) :
	SubtitlesException(no, text, msg) {}

SubtitleEndBeforeStart::SubtitleEndBeforeStart(int no, std::string text, std::string msg) :
	SubtitlesException(no, text, msg) {}

NegativeFrameAfterShift::NegativeFrameAfterShift(int no, std::string text, std::string msg) :
	SubtitlesException(no, text, msg) {}

OutOfOrderFrames::OutOfOrderFrames(int no, std::string text, std::string msg) :
	SubtitlesException(no, text, msg) {}
