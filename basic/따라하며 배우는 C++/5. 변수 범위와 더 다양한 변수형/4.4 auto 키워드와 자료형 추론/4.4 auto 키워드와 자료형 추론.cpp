#include <iostream>
#include <string>

template<typename T>
void print(T value) {
    std::cout << value << std::endl;
}

// 함수의 리턴 값에 대해서 auto를 사용할 수 있다
auto add(int x, int y) -> int   //* 코드를 나중에 정리할 때 보기가 좋다, 후행 반환 타입(trailing return type)
{
    return x + y;
}

auto add(double x, double y) -> double
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

    print(1);           // T = int
    print(3.14);        // T = double
    print("hello");     // T = const char*

    return 0;
}