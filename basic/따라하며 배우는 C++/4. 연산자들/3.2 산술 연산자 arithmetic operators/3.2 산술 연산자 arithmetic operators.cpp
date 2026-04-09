#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int y = -x;         // x의 부호를 변경한다 -> y = 1 * -1 = -1
    int yy = - x;       // 문제 발생
    int yyy = 1 - -x;   // - -는 +가 되어서 2 라는 값이 나온다

    cout << yyy << endl;    // 2

    int z = x + y;          // 1 + -1 = 0

    cout << z << endl;

    int x1 = 6;
    int y1 = 2;
    int z1 = x1 / y1;       // 3
    int z2 = x1 % y1;       // 0

    cout << z1 << endl;
    cout << z2 << endl;

    int x2 = 7;
    int y2 = 4;

    cout << x2 / y2 << endl;    //! 소수점 데이터는 무시된다
    cout << float(x2) / y2 << endl; // 실수 / 정수 = 실수
    cout << x2 / float(y2) << endl; // 정수 / 실수 = 실수
    cout << float(x2) / float(y2) << endl;  // 실수 / 실수 = 실수

    cout << -5 / 2 << endl;  //! C++11부터는 -2.5가 나오면 .5는 버려지고 -2가 나온다
    cout << -5 % 2 << endl; 

    return 0;
}