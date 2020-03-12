#include <iostream>
#include <math.h>
using namespace std;

double Wx1, Wx2, Wy1, Wy2;	
void pobieranie()
{
	cout << "podaj wartosci pierwszego punktu: " << endl << "x1: ";
	cin >> Wx1;
	cout << endl << "y1: ";
	cin >> Wy1;
	cout << endl << endl << "podaj wartosci drugiego punktu: " << endl << "x2: ";
	cin >> Wx2;
	cout << endl << "y2: ";
	cin >> Wy2;
}

double fx, fy, fw;

void obliczanie()
{
	fx = pow((Wx2 - Wx1), 2);
	fy = pow((Wy2 - Wy1), 2);
	fw = sqrt(fx + fy);
}

int main()
{
	while (fw >= 0)
	{
		pobieranie();
		obliczanie();
		cout << endl << "odleglosc miedzy punktami to: " << fw << endl << endl;
	}
		return 0;
}