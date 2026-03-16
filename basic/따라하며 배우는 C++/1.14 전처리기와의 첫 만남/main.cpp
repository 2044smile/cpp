#include <iostream>

using namespace std;

#define MY_NUMBER 9 // define(매크로) 
#define MY_STRING "Hello World"
#define MAX(a, b) ((a) > (b) ? (a) : (b)) // 매크로 함수
#define LIKE_APPLE // define이 선언된 파일 안에서만 작용

void doSomething();

int main()
{
    #ifdef LIKE_APPLE
        cout << "Apple " << endl;
    #else
        cout << "Orange " << endl;
    #endif

    // #ifndef LIKE_ORANGE // if not defined
        // cout << "Orange " << endl;
    // #endif

    cout << MY_NUMBER << endl; // 9
    cout << MY_STRING << endl; // Hello World
    cout << MAX(3+1, 5) << endl; // 5
    cout << std::max(3+1, 5) << endl; // 5 (C++17에서 추가된 std::max)

    return 0;
}