#include "WinHeader.h"
#include "Window.h"


int APIENTRY wWinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR lpCmdLine,
    _In_ int nShowCmd)
{
    Window app(600, 400, L"Eat Shit");
   
    while (Window::ProcessMessages())
    {
        if ( !Window::ProcessMessages())
            return 0;
    }
    return 0;
}