#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    float y = 1.0;
    double x = INFINITY;

    double hasil = nextafter(x, y);
    cout << "nextafter(x, y) = " << hasil << endl;

    _getch();
    return 0;
}