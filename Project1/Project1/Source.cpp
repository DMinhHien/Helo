#include <windows.h>
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdline,
	_In_ int nCmdShow)
{

}
int WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	MessageBox(NULL, L"This is hello world!", L"Hello, World", MB_OK | MB_ICONEXCLAMATION);
}
