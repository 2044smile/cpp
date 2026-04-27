#include <iostream>

//! 함수의 이름은 같은데 파라미터가 다른 경우에는 다른 함수로 사용된다
namespace work1{
    int a = 1;
    int doSomething()  // 같은 영역에 있을 수 없다
    {
        a += 3;
        return a;
    }
}

namespace work2{
    int a = 1;
    int doSomething()  // 같은 영역에 있을 수 없다
    {
        a += 5;
        return a;
    }
}

//! C++17 지원하는 기능
namespace work3::work33::work333{
    int a = 1;
    int doSomething()  // 같은 영역에 있을 수 없다
    {
        a += 3;
        return a;
    }
}

// 함수는 선언과 정의를 분리할 수 있다

int main()
{
    using namespace std;
    // apple = 1; Scope 범위 밖 에러 발생
    int apple = 5;  // OS로 부터 Memory 공간을 받아 온다
    cout << apple << endl;      // 5
    
    {
        apple = 1;
        cout << apple << endl;  // 1
    }
    
    cout << apple << endl;      // 1

    work1::a;
    work1::doSomething();
    cout << "Variable: " << work1::a << "\n" << "Function::doSomething: " << work1::doSomething() << endl;
    // Variable: 4
    // Function::doSomething: 7

    work2::a;
    work2::doSomething();
    cout << "Variable: " << work2::a << "\n" << "Function::doSomething: " << work2::doSomething() << endl;
    // Variable: 6
    // Function::doSomething: 11

    work3::work33::work333::doSomething();
}   // Memory 반납
// apple = 1; Scope 범위 밖 에러 발생
