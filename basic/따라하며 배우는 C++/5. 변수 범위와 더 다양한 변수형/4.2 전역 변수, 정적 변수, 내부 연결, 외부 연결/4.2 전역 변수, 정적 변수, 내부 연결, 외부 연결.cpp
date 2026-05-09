#include <iostream>
#include "constants.h"

using namespace std;

int value = 123;                // global variable
int g_a = 1;                    // global variable
static int s_a = 1;             // static(정적) variable 

// forward declaration
// main.cpp 를 컴파일 할 때 externalDoSomething() 함수의 body 가 존재하니까 linking 할 때 가져다 붙이세요
extern void externalDoSomething();  //! extern 키워드 생략 가능
extern int vVv;                     //! extern 키워드 생략 가능

void doSomething()
{
    // int a = 1;
    // static int a = 1;
    //! static은 변수 a가 OS로 부터 받은 메모리가 static, 초기화를 한번 밖에 안한다
    //! static 변수를 선언할 때 초기화가 반드시 있어야 한다. [X] static int a [O] static int a = 1
    ++g_a;
    cout << g_a << endl;
}

void foo() {
    int local = 0;              // local variable 함수가 호출될 때 마다 생성되고, 함수 호출 - 함수 종료하면 소멸, stack 메모리에 저장, 함수 밖에서 접근 불가
    static int stat = 0;        // static variable 함수가 호출될 때 단 한 번만 생성되고, 프로그램이 끝날 때까지 유지, data segement에 저장, 함수 밖에서 접근 불가

    local++;
    stat++;
    cout << "local: " << local << ", static: " << stat << endl;
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

    cout << "---------" << endl;
    foo();  // local: 1, static: 1
    foo();  // local: 1, static: 2
    foo();  // local: 1, static: 3

    cout << "---------" << endl;
    externalDoSomething();
    cout << vVv << endl;

    cout << "---------" << endl;
    cout << Constants::pi << endl;
    cout << Constants::gravity << endl;
    cout << "[main.cpp] &Constants::pi = " << Constants::pi << " " << &Constants::pi << endl;

    return 0;
}