#include <stdlib.h>
#include <iostream>
#include <windows.h>

int main()
{
	/* tt */

	system("pause");

	HANDLE file = CreateFileW(L"C:\\Users\\Zergatul\\AppData\\Local\\Microsoft\\Internet Explorer\\DOMStore\\2JB4RBHN\\huy.txt", GENERIC_READ, 0, NULL, OPEN_ALWAYS, 0, NULL);
	if (file != INVALID_HANDLE_VALUE)
		std::cout << "ok! = " << (int)file << std::endl;
	else
		std::cout << "invalid handle!" << std::endl;

	/*BYTE* buffer = new BYTE[256];
	DWORD bytesRead;
	ReadFile(file, buffer, 256, &bytesRead, NULL);

	for (int i = 0; i < bytesRead; i++)
		std::cout << (char)buffer[i];
	std::cout << std::endl;

	if (!CloseHandle(file))
	{
		std::cout << "error closing handle!";
	}*/

	/*BOOL result = DeleteFileW(L"E:\\temp\\qq.txt");
	if (result)
		std::cout << "deleted!!" << std::endl;
	else
		std::cout << "oh no" << std::endl;*/

	system("pause");
	return 0;
}