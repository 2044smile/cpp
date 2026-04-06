#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number)
{
    // my_number = 10; 이 경우는 자주 사용되지 않는 방법이다 그래서 const int my_number로 막아주는 것이 좋다.
    cout << my_number << endl;
}

int main()
{
    printNumber(5);
    const double gravity{ 9.8 };

    const int my_const(123); // 컴파일 타임 상수
    constexpr int my_constz(123); // 가능
    int number;
    cin >> number;
    const int special_number(number); //! 런타임 상수(입력 값 사용 가능)
    //! constexpr int speical_numberz(number); 불가능 왜? number라는 함수는 런타임에서 사용자가 입력할 때 정해지니까!

    int num_item = 10;
    int price = num_item * 5; // worst case

    const int price_per_item = 30;
    int pricez = num_item * price_per_item; // best case

    double radius;
    cin >> radius;
    double circumference = 2.0 * radius * constants::pi;

    return 0;
}