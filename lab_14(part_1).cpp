#include "sdtafx.h"
#include <iostream>
#include <string>
#include "windows.h"
using namespace std;

volatile int i;
DWORD WINAPI thread2(LPVOID);

int main()
{
	cout << "First thread\n";
	HANDLE thread = CreateThread(NULL, 0, thread2, NULL, 0, NULL);
	cout << "More data from first thread\n";
	for (int i = 0; i < 1000000; i++)
	{
		while (true)
		{
			i *= -1;
		}
	}
	cout << "Even more data from first thread\n";
	return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
	cout << "Second thread\n";
	printf("i=%i",i);
	getch();
}
