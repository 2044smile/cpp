// 3.141592
// 31.41
// 0.001000
// 123.0002
// 0.0000000001
// 234560000.0000
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double t1 = 3.141592;
    double t2 = 3.141e1;
    double t3 = 1e-3;

    cout << t1 << endl;
    cout << t2 << endl;
    cout << fixed << setprecision(6) << t3 << endl;
    // fixed 소수점 형태로 고정
    // setprecision(6) 소수점 이하 6자리까지 출력하도록 설정한다
}