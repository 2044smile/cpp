#include <iostream>

using namespace std;

// 함수 선언 할 때 출력 값의 데이터 타입
int multiplyTwoNumbers(int num_a, int num_b) // 가급적 자세히 적는 것이 좋다
{ 
    // int sum = num_a * num_b;
    // return sum;
    return num_a * num_b;
}

int addTwoNumbers(int num_a, int num_b)
{
    return num_a + num_b; // return 뒤에 바로 계산식이 올 수도 있음
}

void printHelloWorld()
{
    cout << "Hello World" << endl;

    return; // void 함수는 return 뒤에 아무것도 적지 않음
}

int main()
{
    cout << multiplyTwoNumbers(1, 2) << endl;
    cout << multiplyTwoNumbers(3, 4) << endl;
    cout << multiplyTwoNumbers(8, 13) << endl;

    printHelloWorld();
    //^ lambda(이름 없는 간단한 함수) 함수와 std::function(함수를 변수처럼 저장하고 전달할 수 있게 하는 기능)을 활용하면 함수를 일급 객체처럼 사용할 수 있다
    // Python에서는 기본적으로 함수가 일급 객체

    //! Lambda
    auto add = [](int a, int b){ return a + b; };
    cout << add(3, 4) << endl;

    int x = 10;
    auto print = [x](){ cout << x << endl; };
    print();

    //! std::function
    #include <functional>
    std::function<int(int, int)> f;
    f = [](int a, int b){
        return a+b;
    };
    cout << f(3,4) << endl;

    return 0;
}