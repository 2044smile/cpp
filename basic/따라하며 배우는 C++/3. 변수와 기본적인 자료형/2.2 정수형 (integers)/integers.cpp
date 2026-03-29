#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
    short s = 1;  // 2 bytes = 2 * 8 bits = 16 bits
    cout << sizeof(short) << endl;  // 2 bytes
    cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;  // 32767 signed short 의 최대값
    cout << numeric_limits<short>::max() << endl;  // 32767
    cout << numeric_limits<short>::min() << endl;  // -32768
    cout << numeric_limits<short>::lowest() << endl;  // -32768

    s = 32767;
    s += 1;
    cout << s << endl;  //! -32768 이 현상을 overflow 라고 한다
    // overflow 는 높은 값에서 더 높은 값을 저장하려고 할 때 발생하는 현상으로, 최솟값으로 돌아가는 현상이다. 

    s = numeric_limits<short>::min();
    s -= 1;
    cout << s << endl;  //! 32767 이 현상을 underflow 라고 한다
    // underflow 는 낮은값에서 더 낮은 값을 저장하려고 할 때 발생하는 현상으로, 최댓값으로 돌아가는 현상이다.

    cout << "------------------" << endl;

    int i = 1;
    cout << sizeof(int) << endl;  // 4
    cout << numeric_limits<int>::max() << endl;  // 2147483647
    cout << numeric_limits<int>::min() << endl;  // -2147483648

    i = 2147483647;
    i += 1;
    cout << i << endl;  //! -2147483648

    i = numeric_limits<int>::min();
    i -= 1;
    cout << i << endl;  //! 2147483647

    cout << "------------------" << endl;

    long l = 1;
    cout << sizeof(long) << endl;  // 8

    long long ll = 1;
    cout << sizeof(long long) << endl; // 8

    return 0;
}