#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    while(false)
    {
        int x, y;
        cin >> x >> y;
        cout << "Your input values are : " << x << " " << y << endl;

        //* Relational Operators
        if (x == y)
            cout << "equal" << endl;
        if (x != y)
            cout << "not equal" << endl;
        if (x > y)
            cout << "x is greater than y" << endl;
        if (x < y)
            cout << "x is less than y" << endl;
        if (x >= y)
            cout << "x is greater than y or equal to y" << endl;
        if (x <= y)
            cout << "x is less than or equal to y" << endl;
    }

    return 0;
}