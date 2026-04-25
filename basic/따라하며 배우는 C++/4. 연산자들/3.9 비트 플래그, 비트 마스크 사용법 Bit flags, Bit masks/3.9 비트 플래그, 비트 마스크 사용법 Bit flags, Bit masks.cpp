#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    //^ 비트 플래그
    bool item1_flag = false;
    bool item2_flag = false;
    bool item3_flag = false;
    bool item4_flag = false;

    item1_flag = true;
    item2_flag = false;
    
    if(item3_flag == true)  // item3을 가지고 있다면
    {
        // event
    }

    if(item3_flag == true && item4_flag == false)
    {
        item3_flag = false;
        item4_flag = true;
    }

    const unsigned char opt0 = 1 << 0;          // leftshift operator: 0 자리 수 만큼 민다
    const unsigned char opt1 = 1 << 1;          // leftshift operator: 1 자리 수 만큼 민다
    const unsigned char opt2 = 1 << 2;          // leftshift operator: 1 자리 수 만큼 민다
    const unsigned char opt3 = 1 << 3;          // leftshift operator: 1 자리 수 만큼 민다
    cout << bitset<8>(opt0) << endl;            // 00000001
    cout << bitset<8>(opt1) << endl;            // 00000010
    cout << bitset<8>(opt2) << endl;            // 00000100
    cout << bitset<8>(opt3) << endl;            // 00001000
    cout << "-----------" << endl;

    //* char type == 1 bytes는 true,false를 8(00000000)가지 표시할 수 있다
    unsigned char items_flag = 0;   // unsigned 부호가 없음 -> 부호가 없음 (음수 불가능, 0과 양수만 가능
                                    // signed   부호가 있음 -> 음수, 양수 가능

    cout << bitset<8>(items_flag) << endl;      // 00000000
    items_flag = 3;
    cout << bitset<8>(items_flag) << endl;      // 00000011
    cout << "-----------" << endl;

    items_flag = 0;
    cout << "No item " << bitset<8>(items_flag) << endl;

    // item0 on
    items_flag |= opt0;
    cout << "Item0 obtained " << bitset<8>(items_flag) << endl; // 00000001
    // |= OR
    // 0101
    // 0011
    // ----
    // 0111

    // item3 on
    items_flag |= opt3;
    cout << "Item3 obtained " << bitset<8>(items_flag) << endl; // 00001001

    //! item3 lost
    items_flag &= ~opt3;
    cout << "Item3 lost " << bitset<8>(items_flag) << endl; // 00000001

    // has item1 ? 즉, items_flag에 opt1의 비트 자리에 값이 있다면 true
    if(items_flag & opt1) { cout << "Has item1" << endl; }
    else { cout << "Not have item1" << endl; }

    // has item0 ?
    if(items_flag & opt0) { cout << "Has item0" << endl; }

    // obtain item 2, 3
    items_flag |= (opt2 | opt3);
    cout << bitset<8>(opt2 | opt3) << endl;
    cout << "Item2, 3 obtained " << bitset<8>(items_flag) << endl; // 00001101
    if ((items_flag & opt2) && !(items_flag & opt1))    // !(something & something) 갖고 있지 않을 경우
    {
        //! 상태를 변경해주는 건 bitwise XOR 복합 대입 연산자
        // items_flag ^= opt2;
        // items_flag ^= opt1;
        items_flag ^= (opt2 ^ opt1);
        cout << bitset<8>(items_flag) << endl;
    }

    //^ 비트 마스크
    // #FF0700 색을 표현할 때 1bytes 3개로 표현한다
    // #RED,GREEN,BLUE
    cout << "-----------" << endl;
    const unsigned int red_mask = 0xFF0000;
    cout << bitset<32>(red_mask) << endl;   // 00000000111111110000000000000000
    const unsigned int green_mask = 0x00FF00;
    cout << bitset<32>(green_mask) << endl;   // 00000000000000001111111100000000
    const unsigned int blue_mask = 0x0000FF;
    cout << bitset<32>(blue_mask) << endl;   // 00000000000000000000000011111111
    
    //
    unsigned int pixel_color = 0xDAA520;    // 16진수 숫자
    cout << bitset<32>(pixel_color) << endl;// 00000000110110101010010100100000

    unsigned char red = (pixel_color & red_mask) >> 16;
    cout << "Red: " << bitset<8>(red) << endl;
    //! unsigned `char` green = pixel_color & green_mask; 
    // `char`는 1 바이트이기 때문에 green은 보이지 않아서 int형으로 변경한다
    unsigned char green = (pixel_color & green_mask) >> 8;  //! rightshift
    cout << "Green: " << bitset<8>(green) << " " << int(green) << endl;  // 10100101 165
    // 00100000 & 11111111, & 두 비트가 모두 1일 때만 1을 반환
    unsigned char blue = pixel_color & blue_mask;
    cout << "Blue: " << bitset<8>(blue) << endl;

    return 0;
}