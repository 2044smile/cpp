#include <iostream>

using namespace std;


// int main()
// {
//     int x = 0;
//     // int x = 1; //! error: redefinition of 'x'
//     cout << x << " " << &x << endl; //! 0 0x16f8fe938 같은 메모리 주소
//     {
//         int x = 1; //* 다른 메모리에 대한 식별자 x가 새롭게 선언됨
//         cout << x << " " << &x << endl; //* 1 0x16f8fe934
//     }
//     {
//         int x = 2; //* 다른 메모리에 대한 식별자 x가 새롭게 선언됨
//         cout << x << " " << &x << endl; //* 2 0x16f8fe930
//     }
//     cout << x << " " << &x << endl; //! 0 0x16f8fe938 같은 메모리 주소

//     return 0;
// }
// void doSomethinğ(int &x) //! 만약 main의 x도 바꿔야 한다면 참조자(reference)를 사용하여 x를 전달해야 합니다.
void doSomething(int x)  // - x는 doSomething 함수 안에서만 존재하는 변수
{
    x = 123;
    cout << x << endl;
}

int main()
{
    int x = 0;

    cout << x << endl;  // 0
    doSomething(x);  // 처음에는 x의 값 0을 doSomething()에 전달, 123이 출력됨
    cout << x << endl;  // 0

    return 0;
}