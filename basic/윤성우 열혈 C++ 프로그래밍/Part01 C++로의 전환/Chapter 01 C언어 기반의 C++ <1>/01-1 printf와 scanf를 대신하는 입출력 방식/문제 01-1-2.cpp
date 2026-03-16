// 문제 2
// 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해 보자
#include <iostream>

using namespace std;

int main()
{
    string name, phone_number;
    cin >> name >> phone_number;
    cout << "What's your name? " << "\n" << "My name is " << name << "\n" << "What's your phone numver" << "\n" <<  "My phone number is " << phone_number << "\n";
}
