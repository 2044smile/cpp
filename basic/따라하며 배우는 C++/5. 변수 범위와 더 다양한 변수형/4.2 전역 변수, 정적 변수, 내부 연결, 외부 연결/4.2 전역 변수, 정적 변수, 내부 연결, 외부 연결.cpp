#include <iostream>

using namespace std;

int value = 123;                // global variable
int g_a = 1;                    // global variable

void doSomething()
{
    // int a = 1;
    // static int a = 1;        // static variable 디버깅, 테스팅 할 때 사용, static
    //! static은 변수 a가 OS로 부터 받은 메모리가 static, 초기화를 한번 밖에 안한다
    //! static 변수를 선언할 때 초기화가 반드시 있어야 한다. [X] static int a [O] static int a = 1
    ++g_a;
    cout << g_a << endl;
}

int main()
{
    cout << value << endl;      // 123  global variable
    int value = 1;              // local variable: return 되면 OS에 메모리 반납
    cout << :: value << endl;   // 123  global scope operator(전역 연산자)
    cout << value << endl;      // 1    local variable
    cout << "---------" << endl;

    doSomething();
    doSomething();
    doSomething();
    doSomething();

    return 0;
}