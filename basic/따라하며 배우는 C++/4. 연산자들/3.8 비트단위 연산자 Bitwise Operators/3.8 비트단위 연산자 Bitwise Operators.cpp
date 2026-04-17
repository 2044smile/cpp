#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    // left shift 연산자
    unsigned int a = 3;
    cout << bitset<4>(a) << endl;

    unsigned int b = a << 1;
    cout << bitset<4>(b) << " " << b << endl;   // 0110 6

    unsigned int b1 = a << 2;
    cout << bitset<4>(b1) << " " << b1 << endl;   // 1100 12

    // right shift 연산자
    unsigned int c = 1024;

    cout << std::bitset<16>(c) << endl;
    cout << std::bitset<16>(c >> 1) << " " << (c >> 1) << endl;  // 0000 0100 0000 0000 512
    cout << std::bitset<16>(c >> 2) << " " << (c >> 2) << endl;  // 0000 0010 0000 0000 256
    cout << std::bitset<16>(c >> 3) << " " << (c >> 3) << endl;  // 0000 0001 0000 0000 128
    cout << std::bitset<16>(c >> 4) << " " << (c >> 4) << endl;  // 0000 0000 1000 0000 64

    // not shift 연산자
    unsigned int d = 1024;

    cout << std::bitset<16>(~d) << " " << (~d) << endl;
    cout << std::bitset<16>(~d) << " " << (~d) << endl;

    return 0;
}