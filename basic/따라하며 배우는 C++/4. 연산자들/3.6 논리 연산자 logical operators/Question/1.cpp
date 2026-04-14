#include <iostream>

using namespace std;

int main()
{
    cout << ((true && true) || false) << endl;          // true
    cout << ((false && true) || true) << endl;          // true
    cout << ((false && true) || false || true) << endl; // true
    cout << ((14 > 13 || 2 > 1) && (9 > 1)) << endl;    // true
    cout << !(2314123 > 2 || 123123 > 2387) << endl;    // false
}