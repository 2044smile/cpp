#include <iostream>
#include <typeinfo> // 데이터 리터럴이나 변수명을 집어 넣으면 그 데이터의 타입을 알려주는 typeid 연산자

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
    char c = i;     // 

    cout << c << endl;

    return 0;
}