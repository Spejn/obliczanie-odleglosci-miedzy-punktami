#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

double x1, x2, y, y2;	
void pobieranie()
{
	cout << "podaj wartosci pierwszego punktu: " << endl << "x1: ";
	cin >> x1;
	cout << endl << "y1: ";
	cin >> y;
	cout << endl << endl << "podaj wartosci drugiego punktu: " << endl << "x2: ";
	cin >> x2;
	cout << endl << "y2: ";
	cin >> y2;
}

double fx;
double fy;
double fw;
void obliczanie()
{
	fx = pow((x2 - x1), 2);
	fy = pow((y2 - y), 2);
	fw = sqrt(fx + fy);
}

void main()
{
	pobieranie();
	obliczanie();
	cout << endl << "odleglosc miedzy punktami to: " << fw;
		_getch();
}