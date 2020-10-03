#include "StringConverter.h"

std::wstring StringConverter::StringToWide(std::string str)
{
	if (str.empty())
	{
		return L"Empty String";
	}
	else
	{
		std::wstring widestring(str.begin(), str.end());
		return widestring;
	}
}
