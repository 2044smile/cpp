#include <iostream>

// 함수의 리턴 값에 대해서 auto를 사용할 수 있다
auto add(double x, double y)
{
    return x + y; 
}

int main() {
    using namespace std;

    auto a = 123;
    //! auto a; 정의만 하면 컴파일 에러 -> auto는 반드시 초기화와 함께 사용해야 한다
    auto d = 123.0;
    auto c = 1 + 2;
    auto cc = 1 + 2.0;   //* 정수 + 실수 = 실수
    auto result = add(1, 2);

    cout << add(1,2) << endl;;
    cout << add(1.1, 2.2) << endl;

    return 0;
}