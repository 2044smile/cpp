#include <iostream>

using namespace std;

void myFunction()
{
    
}

int main()
{
    // void my_void 메모리를 차지하지 않아 변수 선언 불가
    int i = 123;
    float f = 123.456f;

    void *my_void;

    my_void = (void*)&i;  // void* 로 형변환, void 포인터는 어떤 타입의 포인터로도 변환 가능
    my_void = (void*)&f;

    cout << my_void << endl;  // void 포인터는 주소값만 출력
    // cout << *my_void << endl;  // 오류: void 포인터는 역참조 불가, 어떤 타입인지 모르기 때문에 컴파일러가 어떻게 해석해야 할지 모름
    cout << *(float*)my_void << endl;  // void 포인터를 float*로 형변환 후 역참조 -> 123.456 출력

    return 0;
}