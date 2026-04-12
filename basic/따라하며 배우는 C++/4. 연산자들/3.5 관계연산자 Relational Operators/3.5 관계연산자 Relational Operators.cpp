#include <iostream>
#include <iomanip>
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
    double d1(100 - 99.99);     // 0.01
    double d2(10 - 9.99);       // 0.01

    cout << d1 << ", " << d2 << endl;
    cout << std::abs(d1 - d2) << endl;  // 5.32907e-15

    const double epsilon = 1e-10;
    if(std::abs(d1 - d2) < epsilon)
        cout << "Approximately equal" << endl;
    else   
        cout << "Not equal" << endl;

    cout << "--------------------" << endl;
    cout << sizeof(d1) << endl;     // 8
    cout << sizeof(d2) << endl;     // 8
    cout << std::setprecision(17);  // using iomanip
    cout << d1 << endl;             // 0.010000000000005116
    cout << d2 << endl;             // 0.0099999999999997868

    if (d1 == d2)
        cout << "equal" << endl;
    else
    {
        cout << "not equal" << endl;

        if (d1 > d2) cout << "d1 > d2" << endl;
        else    // if(d1 < d2) because d1 != d2
            cout << "d1 < d2" << endl;
    }

    return 0;
}