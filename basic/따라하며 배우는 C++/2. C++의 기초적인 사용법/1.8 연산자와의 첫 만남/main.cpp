#include  <iostream>

using namespace std;

int main()
{
    int x = 2; // x is a variable, 2 is a literal.

    // 조건 연산자(Conditional operator)는 C++ 언어의 유일한 삼항 연산자(Ternary operator)
    int y = (x < 0) ? 1 : 2;  //! 조건이 참이면 1, 거짓이면 2를 y에 대입한다.
    cout << y << endl;

    return 0;
}