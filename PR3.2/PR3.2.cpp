#include <iostream>

using namespace std;

int main()
{
	double x;
	double a;
	double c;
	double F;

	cout << "a = "; cin >> a;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	if (c < 0 && a != 0)
		F = -(a * (x * x));
	if (c > 0 && a == 0)
		F = (a - x) / (c * x);
	if (!(c < 0 && a != 0) && !(c > 0 && a == 0))
		F = (x / c);

	cout << endl;
	cout << "1) F = " << F << endl;

	if (c < 0 && a != 0)
		F = -(a * (x * x));
	else
		if (c > 0 && a == 0)
			F = (a - x) / (c * x);
		else
			F = (x / c);

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}