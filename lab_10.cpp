#include "stdafx.h"
#include <iostream>
#include <string>
#include "Time.h"

void main()
{
	class Time a[10];
	int i, j, k;
	a[0].setTime(2, 30);
	a[1].setTime(14, 15);
	a[2].setTime(17, 50);
	a[3].setTime(3, 10);
	a[4].setTime(16, 37);
	a[5].setTime(23, 17);
	a[6].setTime(18, 56);
	a[7].setTime(0, 20);
	a[8].setTime(1, 15);
	a[9].setTime(21, 34);

	for (i = 0; i < 10 - 1; i++) {
		for (j = 0; j < 10 - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}

	for (i = 0; i < 10; i++)
		printf("%3d", a[i]);
	printf("\n");

	getch();
}
