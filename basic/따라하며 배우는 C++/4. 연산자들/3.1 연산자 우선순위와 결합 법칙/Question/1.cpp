#include <iostream>

using namespace std;

int main()
{
    int r = 1 + 2 + 3 * 4;
    cout << r << endl;      // 15
    cout << "------------------" << endl;

    int a = 2;
    int b = 2;
    int c = 2;
    int d = 2;

    cout << (a = (b = c)) << endl;  // b = c는 2, a = 2도 2
    cout << (a == b == c) << endl;  // a == b는 true(1) 이므로, 1 == c(2)는 false(0)

    cout << "------------------" << endl;

    int w = 10;
    cout << --w << endl;    // 9 전위 감소 연산자: w를 먼저 감소시키고 그 값을 출력
    cout << w-- << endl;    // 9 후위 감소 연산자: w의 현재 값(9)을 출력한 후 w를 감소시킴
    cout << w << endl;      // 8 w는 이제 8

    cout << "------------------" << endl;

    int t = 7;
    t /= --w + 7;           // ! /= 연산자는 몫을 계산하는 복합 대입 연산자입니다
    cout << t << endl;      // ! w는 8에서 7로 감소, --w + 7은 14, t는 7 / 14로 계산되어 0이 됨 (정수 나눗셈)

    cout << "------------------" << endl;
    cout << (a || b && c || d) << endl; // or or 비교해서 a, b, c, d 모두 2이므로 true(1) 출력, 둘 중 하나라도 false(0) 이면 false(0) 출력

    return 0;
}