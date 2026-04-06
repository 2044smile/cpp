#include <iostream>

int main()
{
    using namespace std;

    float pif = 3.14f;
    double pid = 3.14;
    int i = -12345;

    cout << pif << endl;
    cout << pid << endl;
    cout << i << endl;

    unsigned int n = 5u;
    long l = 5L;
    double d = 6.0e10;

    cout << n << endl;
    cout << l << endl;
    cout << fixed << d << endl; // 60000000000.000000

    // 8진수 리터럴
    //Octal : 0 1 2 3 4 5 6 7 *10 11 12 13

    // 10진수 리터럴
    //Decimal: 0 1 2 3 4 5 6 7 8 9 10

    // 16진수
    //Hexa: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

    int x = 12; // 10진수 리터럴
    int xx = 012; // 8진수 리터럴
    int xxx = 0xF; // 16진수 리터럴

    cout << x << endl; // 12
    cout << xx << endl; // 10
    cout << xxx << endl; // 15

    int x1 = 0b1010;
    // int x1 = 0b1011'1111'1010; // C++14 이상에서 지원하는 2진수 리터럴과 digit separator
    cout << x1 << endl; // 10

    return 0;
}