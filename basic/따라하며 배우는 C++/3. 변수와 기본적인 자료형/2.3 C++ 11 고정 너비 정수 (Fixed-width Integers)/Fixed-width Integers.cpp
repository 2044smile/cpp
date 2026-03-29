#include <iostream>

using namespace std;

int main()
{
    std::int16_t i(5);  // 2bytes

    std::int8_t myint = 65;  //! 1bytes, int8_t == typedef signed char int8_t;
    cout << myint << endl;  //! 숫자가 아닌 문자 A를 출력
    std::int16_t myint2 = 65;
    cout << myint2 << endl; //! 숫자 65를 출력

    // 숫자로 강제 출력
    cout << int(myint) << endl; //! 숫자 65를 출력 -> "그냥 바꿔, 묻지도 따지지도 말고"
    cout << static_cast<int>(myint) << endl; //! 숫자 65를 출력 -> "안전한 변환인지 확인하고 바꿔"

    std::int_fast8_t fi(5);  // 1bytes
    std::int_least64_t fl(5);  // 8bytes

    return 0;
}