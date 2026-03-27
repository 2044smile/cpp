#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    int j = 3;
    int i = -1;
    int k = 123;
    char a = 'H';

    // char 포인터 vs int 포인터 비교
    cout << "1. &a만 사용: " << &a << endl;              // ❌ 주소 안 나옴!
    cout << "2. &i만 사용: " << &i << endl;              // ✅ 주소 출력됨
    cout << "3. (void*)&a: " << (void*)&a << endl;       // ✅ 주소 정상 출력됨
    cout << "4. (void*)&i: " << (void*)&i << endl;       // ✅ 주소 정상 출력됨
    
    return 0;
}
