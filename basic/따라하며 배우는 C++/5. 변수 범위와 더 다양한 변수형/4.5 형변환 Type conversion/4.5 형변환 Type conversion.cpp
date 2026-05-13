#include <iostream>
#include <typeinfo> // 데이터 리터럴이나 변수명을 집어 넣으면 그 데이터의 타입을 알려주는 typeid 연산자
#include <iomanip>

int main() {
    using namespace std;

    // 암시적 형변환 (implicit type conversion)
    int a = 7.0;

    cout << typeid(a).name() << endl;     // i(int)
    cout << typeid(4.0).name() << endl;   // d(double)
    cout << typeid(4).name() << endl;     // i(int)

    // 명시적 형변환 (explicit type conversion)
    // numberic promotion (자동 형변환)
    float f = 1.0f; // float bytes : 4
    double d = f;   // double bytes : 8, float에서 double로 자동 형변환이 일어남

    // numberic conversion
    int i = 30000;
    char ci = i;

    int j = 2;
    char cj = j;

    float ff = 3.14;
    int ii = ff;

    cout << "------------" << endl;
    cout << static_cast<int>(ci) << endl;  //! static cast 명시적 형변환 : 48
    cout << static_cast<int>(cj) << endl;  //! static cast 명시적 형변환 : 2
    cout << ii << endl;

    //! 우선순위
    // int < unsigned int < long < unsigned long < long long < unsigned long long < float < double < long double
    // 5u(unsigned int) - 10(int) -> 10이 unsigned int로 변환 -> 언더플로우 -> 4294967291
    cout << 5u - 10;        //! 4294967291

    int i = 4.0;                    //! 암시적 형변환
    int i = int(4.0);               //! C++ 스타일 캐스팅
    int i = static_cast<int>(4.0);  //! 안전한 명시적 캐스팅, 컴파일 타임에 타입 호환성 검사

    return 0;
}