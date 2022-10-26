// Lab_4_04.cpp
// < Мілянеця Мар`яна >
// Лабораторна робота № 4.3
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 20
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, a, b, c, F;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "F" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    x = xp;
    while (x <= xk)
    {
    if (x < 0 && b != 0)
        F = -(2 * x - c) / (c * x - a);
    if (x > 0 && b == 0)
        F = (x - a) / (x - c);
    if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
        F = -x / c + (-c) / (2 * x);
    cout << "|" << setw(7) << setprecision(2) << x
        << " |" << setw(10) << setprecision(3) << F
        << " |" << endl;
    x += dx;
}
cout << "---------------------------" << endl;
return 0;
}