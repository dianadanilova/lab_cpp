#include "stdafx.h"
#include "iostream"
#include "string"
#include "money.h"
using namespace std;

int main()
{
	class Money x, y;
	int a, b, c, d;
	cout << "Vvedite summu";
	cin >> a;
	x.set(a);

	cout << "Vvedite summu";
	cin >> b;
	x.set(b);

	cout << "Vvedite summu";
	cin >> c;
	y.set(c);

	cout << "Vvedite summu";
	cin >> d;
	y.set(d);

	cout << "\nSumm: " << x.getRubley() + y.getRubley() << "," << x.getKopeek() + y.getKopeek() << endl;
	cout << "\nRazn: " << x.getRubley() - y.getRubley() << "," << x.getKopeek() - y.getKopeek() << endl;
	getch();
	return;
}
