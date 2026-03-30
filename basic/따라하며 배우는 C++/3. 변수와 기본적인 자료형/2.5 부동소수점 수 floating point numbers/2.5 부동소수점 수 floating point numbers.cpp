#include <iostream>
#include <iomanip>  // 숫자를 몇 째 자리까지 출력할지 설정하기 위해 필요하다
#include <limits>  // numeric_limits 클래스 템플릿을 사용하기 위해 필요하다
#include <cmath> // isnan() 함수를 사용하기 위해 필요하다

using namespace std;

int main()
{
    float f(3.141592);  // 3.14159가 출력된다. float는 소수점 이하 6자리까지 표현할 수 있기 때문이다.
    float f2(3.14); 

    cout << 3.14 << endl;       // 3.14
    // f(3.14*100 = 3.14e2)
    cout << 31.4e-1 << endl;    // 3.14, 31.4e-1은 31.4 * 10^(-1)로 계산되기 때문이다.
    cout << 31.4e-2 << endl;    // 3.14, 314e-2는 314 * 10^(-2)로 계산되기 때문이다
    cout << 31.4e1 << endl;     // 314, 31.4e1은 31.4 * 10^(1)로 계산되기 때문이다.
    cout << 31.4e2 << endl;     // 3140, 31.4e2는 31.4 * 10^(2)로 계산되기 때문이다.

    double d(3.141592);
    long double ld(3.141592);

    cout << sizeof(f) << endl;  // 4
    cout << sizeof(d) << endl;  // 8
    cout << sizeof(ld) << endl;  // 16

    cout << numeric_limits<float>::max() << endl;  // 3.40282e+38
    cout << numeric_limits<double>::max() << endl;  // 1.79769e+308
    cout << numeric_limits<long double>::max() << endl;  // 1.18973e+4932

    // `min()` 가장 작은 양수 - 표현 가능한 가장 작은 양의 정규화 수(normalized number)를 반환
    cout << numeric_limits<float>::min() << endl;  // 1.17549e-38
    cout << numeric_limits<double>::min() << endl;  // 2.22507e-308
    cout << numeric_limits<long double>::min() << endl;  // 3.3621e-4932

    // `lowest()` 가장 작은 음수 (가장 큰 음수 값)
    cout << numeric_limits<float>::lowest() << endl;  // -3.40282e+38
    cout << numeric_limits<double>::lowest() << endl;  // -1.79769e+308
    cout << numeric_limits<long double>::lowest() << endl;  // -1.18973e+4932

    cout << std::setprecision(16);
    cout << 1.0 / 3.0 << endl;  // 0.3333333333333333 iomanip 헤더 파일에 정의된 setprecision 조작자를 사용하여 소수점 이하 16자리까지 출력하도록 설정한다.

    float f3(123456789.0f);  // 10 significant digits
    cout << std::setprecision(9);  // 소수점 이하 9자리까지 출력하도록 설정한다
    cout << f3 << endl;  // 123456792, float는 소수점 이하 6자리까지 표현할 수 있기 때문에 123456789.0f는 123456792로 표현된다

    double db1(0.1);

    cout << db1 << endl;
    cout << std::setprecision(17);
    cout << db1 << endl;  // 0.10000000000000001 

    double db2(1.0);
    double db3(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

    cout << db2 << endl;
    cout << db3 << endl;  // 0.99999999999999989 -> 오차가 누적이 된다

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << posinf << endl;  // inf
    cout << neginf << endl;  // -inf
    cout << nan << endl;     // nan

    cout << posinf << " " << std::isinf(posinf) << endl;  // inf 1(true)
    cout << neginf << " " << std::isnan(neginf) << endl;  // -inf 0(false)
    cout << nan << " " << std::isnan(nan) << endl;        // nan 1(true)
    cout << 1.0 << " " << std::isnan(1.0) << endl;        // 1 0(false)

    return 0;
}