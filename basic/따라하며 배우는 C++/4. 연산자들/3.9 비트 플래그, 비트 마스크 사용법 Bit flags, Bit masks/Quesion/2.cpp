// 2. 아래 두 줄이 왜 동일하게 작동하는지 설명해보세요
// myflags &= ~(option4 | option5);
// myflags &= ~option4 & ~option5;
//^ 드모르간 법칙: A 또는 B가 아니다, A도 아니고 B도 아니다
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned char option4 = 0x08;   // 0000 1000
    unsigned char option5 = 0x10;   // 0001 0000

    unsigned char myflags = 0xFF;   // 1111 1111 (모든 비트 켜기)

    cout << "초기값 : " << bitset<8>(myflags) << endl;
    cout << "option4 : " << bitset<8>(option4) << endl;
    cout << "option5 : " << bitset<8>(option5) << endl;
    cout << "---------------" << endl;

    // 1번 방법
    unsigned char result1 = myflags;
    // option4:     00001000
    // option5:     00010000
    result1 &= ~(option4 | option5);
    cout << "1번 결과: " << bitset<8>(result1) << endl;    // 11100111

    // 2번 방법
    unsigned char result2 = myflags;
    result2 &= ~option4 & ~option5;
    cout << "2번 결과: " << bitset<8>(result2) << endl;
    cout << "---------------" << endl;

    cout << "option4|option5:    " << bitset<8>(option4 | option5) << endl;     // OR
    cout << "option4&option5:    " << bitset<8>(option4 & option5) << endl;     // AND
    cout << "~(option4|option5): " << bitset<8>(~(option4 | option5)) << endl;      // 11100111
    cout << "~option4:           " << bitset<8>((unsigned char)~option4) << endl;   // 11110111
    cout << "~option5:           " << bitset<8>((unsigned char)~option5) << endl;   // 11101111
    cout << "~option4 & ~option5:" << bitset<8>((unsigned char)(~option4 & ~option5)) << endl;  // 111001111
}