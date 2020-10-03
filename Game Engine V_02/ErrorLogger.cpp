#include "ErrorLogger.h"
#include <comdef.h>

void ErrorLogger::Log(std::string message)
{
	std::string ErrorMessage = "Error: " + message;
	MessageBoxA(nullptr, ErrorMessage.c_str(), "Error", MB_OK | MB_ICONEXCLAMATION);
}

void ErrorLogger::Log(HRESULT hr, std::string message)
{
	_com_error error(hr);
	std::wstring error_message = L"Error: " + StringConverter::StringToWide(message) + L"\n" + error.ErrorMessage();
	MessageBoxW(nullptr, error_message.c_str(), L"HRESULT Error", MB_OK | MB_ICONEXCLAMATION);

}
