#include <iostream>
#include <stdio.h>
#include "LiniarEquations.h"
#include "QuadraticEquation.h"
#include "Base.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    LiniarEquations a(6, -6);

    cout << "Коєфiцiєнти квадратного рiвняння" << endl; a.equation_roots();

    QuadraticEquation b(3, 7, -10);

    cout << "Коренi: " << endl; b.equation_roots();
    cout << endl << endl;

    Base* arr[2];

    arr[0] = &a;
    cout << "Коєфiцiєнти квадратного рiвняння" << endl; arr[0]->equation_roots();


    arr[1] = &b;
    cout << "Коренi: " << endl; arr[1]->equation_roots();

    system("pause");
    return 0;
}








//Інтерфейс - це клас, який не має змінних членів і всі методи якого є чистими віртуальними функціями!