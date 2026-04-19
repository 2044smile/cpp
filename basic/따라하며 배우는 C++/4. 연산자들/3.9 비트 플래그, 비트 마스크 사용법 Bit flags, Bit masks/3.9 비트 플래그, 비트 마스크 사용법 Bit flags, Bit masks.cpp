#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    const unsigned char opt0 = 1 << 0;
    cout << bitset<8>(opt0) << endl;  // 00000001
    const unsigned char opt1 = 1 << 1;// 00000010
    cout << bitset<8>(opt1) << endl;  // 00000001
    const unsigned char opt2 = 1 << 2;// 00000100
    cout << bitset<8>(opt2) << endl;  // 00000001
    const unsigned char opt3 = 1 << 3;// 00001000
    cout << bitset<8>(opt3) << endl;  // 00000001

    unsigned char items_flag = 0;
    cout << "No item " << bitset<8>(items_flag) << endl;  // 00000000

    // item0 on
    items_flag |= opt0; // |= 는 기존 비트는 유지하면서 비트를 추가로 켜는 연산
    cout << "Item0 obtained " << bitset<8>(items_flag) << endl;  // 00000000

    // item3 on
    items_flag |= opt3;
    cout << "Item3 obtained " << bitset<8>(items_flag) << endl;  // 00000000

    // item3 lost
    items_flag &= ~opt3;
    cout << "Item3 lost " << bitset<8>(items_flag) << endl;  // 00000000

    return 0;
}