#pragma once
#include "WinHeader.h"
#include <string>
#include "ErrorLogger.h"
class Window
{


private:
	class WindowClass
	{
	public:
		static HINSTANCE GetInstance() noexcept;
		static LPCWSTR& GetName() noexcept;

	private:
		WindowClass();
		~WindowClass();
		WindowClass(const WindowClass&) = delete;
		WindowClass& operator=(const WindowClass&) =delete;


	public:
		HINSTANCE hInst;
		
		static WindowClass wndClass;
		LPCWSTR class_name = L"foo";
	};

public:
	Window(unsigned int width, unsigned int height, std::wstring name );
	~Window();
	Window(const Window&) = delete;
	Window& operator=(const Window&) = delete;

	void SetTitle(const std::wstring& title);

	static bool ProcessMessages();

private:
	static LRESULT CALLBACK HandleMsgSetup(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;
	static LRESULT CALLBACK HandleMsgThunk(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;
	LRESULT HandleMsg(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;

private:
	HWND hWnd;
	unsigned int Width;
	unsigned int Height;
};

