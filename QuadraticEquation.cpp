#include "QuadraticEquation.h"
#include <cmath>
#include <iostream>
QuadraticEquation::QuadraticEquation()
{
    a = 0;
    b = 0;
    c = 0;
}

QuadraticEquation::QuadraticEquation(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}

void QuadraticEquation::equation_roots()
{
    int x[2];
    int d = b * b - 4 * a * c;
    if (d > 0) {
        x[0] = (-b + sqrt(d)) / (2 * a);
        x[1] = (-b - sqrt(d)) / (2 * a);

        cout << x[0] << "," << x[1] << endl;
    }
    else
        cout << "error" << endl;
}
