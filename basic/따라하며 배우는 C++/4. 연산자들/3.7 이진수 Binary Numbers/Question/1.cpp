#include <iostream>
#include <bitset>   // 비트 숫자 표현을 위한 헤더

using namespace std;

int main() {
    // 이진수 0100 1101을 10진수로 변환
    bitset<8> bits1("01001101");
    unsigned int decimal1 = bits1.to_ulong();  // 이진수 숫자를 십진수로 변환
    cout << decimal1 << endl;  // 결과 출력  //! 77

    // 10진수 93을 8비트 무부호 정수로 변환
    int t1 = 93;
    bitset<8> bits2(t1);
    cout << bits2 << endl;                  //! 01011101

    // 10진수 -93을 8비트 부호 정수로 변환
    int t2 = -93;
    bitset<8> bits3(t2);
    cout << t2<< " -> " << bits3 << endl;   //! -93 -> 10100011

    // 2진수 1010 0010을 무부호 10진수로 변환
    bitset<8> bits4("10100010");
    unsigned int decimal2 = bits4.to_ulong();// 무부호 
    cout << decimal2 << endl;               //! 162

    // 2진수 1010 0010을 부호가 있는 10진수로 변환
    bitset<8> bits5("10100010");
    signed int decimal3 = (signed char)bits5.to_ulong();
    cout << decimal3 << endl;               //! -94
}