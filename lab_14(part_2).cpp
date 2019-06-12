#include "stdafx.h"
#include "windows.h"
#include <string>
#include <iostream>
#include <ctime>
using namespace std;

DWORD WINAPI thread1(LPVOID);
DWORD WINAPI thread2(LPVOID);
DWORD WINAPI thread3(LPVOID);
DWORD WINAPI thread4(LPVOID);
DWORD WINAPI thread5(LPVOID);

volatile int Semenov, Petrov, Gogolev;
int main()
{
	Semenov = 0;
	Petrov = 0;
	Gogolev = 0;

	HANDLE thread[5];
	thread[0] = CreateThread(NULL, 0, thread1, NULL, 0, NULL);
	thread[1] = CreateThread(NULL, 0, thread2, NULL, 0, NULL);
	thread[2] = CreateThread(NULL, 0, thread3, NULL, 0, NULL);
	thread[3] = CreateThread(NULL, 0, thread4, NULL, 0, NULL);
	thread[4] = CreateThread(NULL, 0, thread5, NULL, 0, NULL);

	DWORD dwWaitResult = ::WaitForMultipleObjects(5, thread, true, INFINITE);

	cout << "\nГолосов у Семенова: \n" << Semenov;
	cout << "Голосов у Петрова: \n" << Petrov;
	cout << "Голосов у Гоголева: \n" << Gogolev;
	cout << "Голос: \n" << Gogolev + Semenov + Petrov;
	return 0;
}
DWORD WINAPI thread1(LPVOID t)
{
	srand(time(0));
	for (int g = 0; g < 500; g++)
	{
		int res = rand() % 2 + 1;
		
		if (res == 1)
		{
			Semenov++;
		}
		if (res == 2)
		{
			Petrov++;
		}
		if (res == 3)
		{
			Gogolev++;
		}
	}
	cout << "1 город\n ";
	return 0;
}
DWORD WINAPI thread2(LPVOID t)
{
	srand(time(0));
	for (int g = 0; g < 500; g++)

	{
		int res = rand() % 2 + 1;
		{
			if (res == 1)
			{
				Semenov++;
			}
			if (res == 2)
			{
				Petrov++;
			}
			if (res == 3)
			{
				Gogolev++;			
			} cout << "2 город\n";
		}
	}
	cout << "2 город\n";
	return 0;
}
DWORD WINAPI thread3(LPVOID t)
{
	srand(time(0));
	for (int g = 0; g < 500; g++)
	{
		int res = rand() % 2 + 1;
		if (res == 1)
		{
			Semenov++;
		}
		if (res == 2)
		{
			Petrov++;
		}
		if (res == 3)
		{
			Gogolev++;
		}
	}
	cout << "3 город\n";
	return 0;
}
DWORD WINAPI thread4(LPVOID t)
{
	srand(time(0));
	for (int g = 0; g < 500; g++)
	{
		int res = rand() % 2 + 1;
		{
			if (res == 1)
			{
				Semenov++;
			}

			if (res == 2)
			{
				Petrov++;
			}
			if (res == 3)
			{
				Gogolev++;
			}
		}
	}
	cout << "4 город\n";
	return 0;
}
DWORD WINAPI thread5(LPVOID t)
{
	srand(time(0));
	for (int g = 0; g < 500; g++)
	{
		int res = rand() % 2 + 1;
		if (res == 1)
		{
			Semenov++;
		}
		if (res == 2)
		{
			Petrov++;
		}
		if (res == 3)
		{
			Gogolev++;
		}
	}
	cout << "5 город\n";
	return 0;
}