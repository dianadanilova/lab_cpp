#include "stdafx.h"
#include <iostream>
#include <string>
#include "money.h"

void main()
{
	class money a[10];
	int i, j, k;
	a[0].setMoney(25, 50);
	a[1].setMoney(14, 0);
	a[2].setMoney(28, 50);
	a[3].setMoney(3, 10);
	a[4].setMoney(100, 80);
	a[5].setMoney(30, 15);
	a[6].setMoney(45, 56);
	a[7].setMoney(200, 450);
	a[8].setMoney(10, 125);
	a[9].setMoney(120, 340);

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

	system("pause");
}