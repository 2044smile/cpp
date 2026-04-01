#include <iostream>
#include <limits>

int main()
{
    using namespace std;

    char c1(65);
    char c2('A');  // 'A', "Hello, World", std::string 

    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

    // c-style casting
    cout << (char)65 << endl;
    cout << (int)'A' << endl;

    // cpp-style casting
    cout << char(65) << endl;
    cout << int('A') << endl;

    // static_cast, dynamic_cast . . 컴파일러에게 체크를 맡기는 캐스팅
    cout << static_cast<char>(65) << endl;
    cout << static_cast<int>('A') << endl;

    char ch(97);
    cout << ch << endl;  // a
    cout << static_cast<int>(ch) << endl;  // 97
    cout << ch << endl;  // a

    // abc 를 입력하게 되면 a, b만 출력되고 c는 버퍼에 남아있게 된다
    cin >> c1;  // 한 글자 밖에 입력받지 못한다
    cout << c1 << " " << static_cast<int>(c1) << endl;

    cin >> c1;  // 한 글자 밖에 입력받지 못한다
    cout << c1 << " " << static_cast<int>(c1) << endl;

    char c3(65);

    cout << sizeof(char) << endl; // 메모리 크기 1 byte = 8 bits = 256개 값을 가질 수 있음
    cout << (int)numeric_limits<char>::max() << endl; // 127
    cout << (int)numeric_limits<char>::lowest() << endl; // -128

    // unsigned 부호가 없는 타입
    cout << sizeof(unsigned char) << endl; // 메모리 크기 1 byte = 8 bits = 256개 값을 가질 수 있음
    cout << (int)numeric_limits<unsigned char>::max() << endl; // 255
    cout << (int)numeric_limits<unsigned char>::lowest() << endl; // 0

    return 0;
}