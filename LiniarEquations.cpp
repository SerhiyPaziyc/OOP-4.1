#include "LiniarEquations.h"

LiniarEquations::LiniarEquations() : k(0), v(0)
{ }

LiniarEquations::LiniarEquations(int k, int v) : k(k), v(v)
{ }

void LiniarEquations::equation_roots()
{
    if (k != 0) {
        int Lsum = -v / k;
        cout << Lsum << endl;
    }
    else
        cout << "error" << endl;
}