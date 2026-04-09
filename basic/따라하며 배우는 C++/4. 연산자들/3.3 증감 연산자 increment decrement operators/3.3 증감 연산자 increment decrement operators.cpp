#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 5;
    int y = ++x;        // 더하기
    int z = x--;        // 빼기

    cout << y << endl; 
    cout << z << endl;

    int x1 = 6, y1 = 6;
    cout << x1 << " " << y1 << endl;
    // cout << ++x1 << " " << --y1 << endl;         //! 7 5
    cout << x1++ << " " << y1-- << endl;            //! 6 6  
    cout << x1 << " " << y1 << endl;                //! 7 5

    cout << "-------------------" << endl;

    int a = 1;
    int b = add(a, ++a);        //! 4: do not use

    cout << b << endl;

    int q = 1, w = 2;
    int sum = add(q, ++w);

    cout << sum << endl;

    return 0;
} 