#include "stdafx.h"
#include <iostream>
#include <string>
#include "complex.h"

using namespace std;

void read_complex(struct complex *a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "¬ведите число:" << i+1;
		cin >> a[i].x;
		cout << "¬ведите число:" << i+1;
		cin >> a[i].y;
	}
	system("pause");
	return;
}