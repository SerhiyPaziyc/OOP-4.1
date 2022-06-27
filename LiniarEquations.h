#pragma once
#include <stdio.h>
#include <iostream>
#include "Base.h"


class LiniarEquations : public Base {
private:
    int k, v;
public:
    LiniarEquations();
    LiniarEquations(int k, int v);
    ~LiniarEquations() { };

    int getK() { return k; }
    int getV() { return v; }

    void equation_roots() override;

};