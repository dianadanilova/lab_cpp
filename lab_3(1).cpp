#include "stdafx.h"
#include "dll.h"
#include <stdio.h>
#include <iostream>

using namespace std;

extern "C" __declspec(dllexport) void read_complex(struct complex *a)
{
	cout << "Введите число a.x:";
	cin >> (*a).x;
	cout << "Введите число a.y:";
	cin >> (*a).y;

	system("pause");
	return 0;
}