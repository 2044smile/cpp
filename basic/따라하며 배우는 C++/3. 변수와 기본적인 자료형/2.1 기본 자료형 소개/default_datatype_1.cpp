#include <iostream>

using namespace std;

int main(void)
{
    bool bValue1 = false;
    bool bValue2 = true;

    cout << (bValue1 ? 1 : 0) << endl;  // 0
    cout << bValue1 << endl;  // 0
    cout << bValue2 << endl;  // 1

    char chValue1 = 'A';
    char chValue2 = 65;  // 숫자도 문자열로 표현

    cout << chValue1 << endl;  // A
    cout << (int)chValue1 << endl;  // 65 (ASCII 코드값)
    cout << chValue2 << endl;  // A

    float fValue = 3.141592f;  // f를 안붙이면 double로 인식 WARNING
    double dValue = 3.141592;  // 파이썬은 기본적으로 double을 사용

    //* cout의 기본 정밀도는 "총 6자리" 즉 6자리까지만 보여주면서 반올림됨
    cout << fValue << endl;  // 3.14159 
    cout << dValue << endl;  // 3.14159

    auto aValue = 3.141592;
    auto aValue2 = 3.141592f;

    cout << aValue << endl;  // 3.14159
    cout << sizeof(aValue) << endl;  // 8 (double)
    cout << aValue2 << endl;  // 3.14159
    cout << sizeof(aValue2) << endl;  // 4 (float)

    cout << sizeof(char) << endl;  // 1
    cout << sizeof(bool) << endl;  // 1

    // initialization
    int iValue1 = 0;  // C 스타일 초기화 (copy initialization)
    int iValue2(0);  // C++ 스타일 초기화 (direct initialization)
    int iValue3{0};  // C++11 스타일 초기화 (uniform initialization) 엄격

    // 형변환
    int i = (int)3.1415;  // 3이 됨
    int a((int)3.1415);  // 3이 됨
    int b{ 4 }; // 4가 됨

    cout << i << endl;  // 3
    cout << a << endl;  // 3
    cout << b << endl;  // 4

    // 여러 개의 변수를 동시에 선언
    int k, l, m;
    int k, l, m=123;  //! 권장하지 않는다

    return 0;
}