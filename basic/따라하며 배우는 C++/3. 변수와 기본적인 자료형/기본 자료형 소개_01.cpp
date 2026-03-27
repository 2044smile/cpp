#include <iostream>
#include <bitset>


int main()
{
    using namespace std;

    // 변수들이 메모리에 저장될 때 각각 다른 주소(위치)를 갖게 된다
    int j = 3;
    int i = -1;
    int k = 123;
    char a = 'H';

    // static_cast<void*>() 주소를 void 포인터로 변환
    // uintptr_t void 포인터를 정수로 변환해서 출력 가능하게
    cout << &a << endl;  // char* 주소 값이 아니라 문자열로 출력
    cout << (uintptr_t)static_cast<void*>(&a) << endl;

    cout << &i << endl; // 포인터 형식으로 출력 (읽기 불편함)
    cout << (uintptr_t)static_cast<void*>(&i) << endl; // 정수 형식으로 변환해서 출력 (더 명확함)
}
