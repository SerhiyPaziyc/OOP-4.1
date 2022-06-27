#pragma once
#include <stdio.h>
#include <iostream>
#include "Base.h"


class QuadraticEquation : public Base {

private:
    int a, b, c;
public:

    QuadraticEquation();
    QuadraticEquation(int x, int y, int z);
    ~QuadraticEquation() { };

    int getA() { return a; }
    int getB() { return b; }
    int getC() { return c; }

    void equation_roots() override;

};