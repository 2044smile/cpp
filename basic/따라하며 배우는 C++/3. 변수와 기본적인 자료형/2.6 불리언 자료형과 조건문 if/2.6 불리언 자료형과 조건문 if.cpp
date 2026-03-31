#include <iostream>

using namespace std;

bool isEqual(int a, int b)
{
    bool result = (a == b);
    cout << std::boolalpha;
    return result;  // a와 b가 같으면 true, 다르면 false 반환
}

int main()
{
    bool b1 = true; // copy initialization(복사 초기화) C부터 사용하던 오래된 방식
    bool b2(false); // direct initialization(직접 초기화) 함수 호출처럼 생긴 방식, 데이터 손실을 막아주지 않음
    bool b3 {true}; // uniform initialization(균일 초기화) C++11부터 등장한 가장 안전한 방식
    //!uniform initialization 권장 이유: 데이터 손실이 발생하는 경우 컴파일러가 오류를 발생시키기 때문에 안전한 초기화 방법
    // int i {3.14};  // 오류: double을 int로 변환하는 과정에서 데이터 손실이 발생하기 때문에 컴파일러가 거부
    b3 = false;

    cout << b3 << endl;  // 0
    cout << b1 << endl;  // 1

    cout << std::boolalpha;  // boolalpha 조작자: bool 값을 true/false로 출력하도록 설정
    cout << b1 << endl;  // true
    cout << b2 << endl;  // false
    cout << b3 << endl;  // false

    cout << std::noboolalpha;  
    cout << !true << endl;   // false
    cout << !false << endl;  // false
    cout << !b1 << endl;
    cout << !b2 << endl;

    //! and 양쪽 모두 true 일 때만 true, 나머지는 false
    cout << (true && true) << endl;     // true
    cout << (true && false) << endl;    // false
    cout << (false && true) << endl;    // false
    cout << (false && false) << endl;   // false

    //! or 양쪽 중 하나라도 true 면 true, 둘 다 false 일 때만 false
    cout << (true || true) << endl;     // true
    cout << (true || false) << endl;    // true
    cout << (false || true) << endl;    // true
    cout << (false || false) << endl;   // false

    if (true)
        cout << "this is true" << endl;
    else
        cout << "this is false" << endl;

    //! 두 줄 이상의 문장을 if-else로 묶을 때는 중괄호로 블록을 만들어야 함
    if (true)
    {
        cout << "this is true" << endl;
        cout << "Hiii" << endl;
    }
    else
    {
        cout << "this is false" << endl;
        cout << "Hiii" << endl;
    }

    cout << "------------------" << endl;
    cout << isEqual(3, 3) << endl;  // true(1)
    cout << isEqual(3, 4) << endl;  // false(0)

    //! C++에서는 0이 아닌 모든 정수는 true로 간주됨
    if (5)
        cout << "5 is true" << endl;
    else
        cout << "5 is false" << endl;

    bool i;
    //* 사용자 입력을 받아서 bool 변수에 저장할 때는 0 또는 1을 입력해야 함
    // 이 코드는 컴파일러 마다 다르게 동작할 수 있음
    cin >> i;
    cout << "You entered: " << i << endl;
}