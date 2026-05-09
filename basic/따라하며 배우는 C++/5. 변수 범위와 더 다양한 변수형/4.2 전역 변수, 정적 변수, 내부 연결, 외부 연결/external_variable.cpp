#include <iostream>
#include "constants.h"

using namespace std;
int vVv = 1;

void externalDoSomething()
{
    cout << "Hello " << endl;
    cout << "[external_variable.cpp] &Constants::pi = " << Constants::pi << " " << &Constants::pi << endl;
}