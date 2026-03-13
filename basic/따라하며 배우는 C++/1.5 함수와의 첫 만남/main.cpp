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

    return 0;
}