#include <iostream>

using namespace std;

int main()
{
    // & : 주소 연산자
    // & = "이 변수가 메모리 어디에 있어?"
    int val1 = 5;
    cout << "val1의 값 : " << val1 << endl;
    cout << "val1의 주소 : " << &val1 << endl;

    // *는 두 가지 의미가 있다
    // 의미 1 - 포인터 변수를 선언할 때 "나는 주소를 담는 변수야" 라고 선언
    int* ptr1 = &val1; // ptr1 = val1의 주소를 담음 -> ptr1은 val1의 주소를 담는 포인터 변수
    // ! int ptr1 = &val1; // 이렇게 하면 ptr1이 int형 변수가 되어서 오류가 발생한다.
    cout << "ptr1의 값 : " << ptr1 << endl; // ptr1의 값은 val1의 주소
    cout << "&val1 : " << &val1 << endl; // 같은 주소
    
    // 의미 2 - 포인터로 실제 값에 접근할 때 "이 주소에 있는 값을 가져와" 라고 지시
    cout << "*ptr1 : " << *ptr1 << endl; // ptr1이 가리키는 값은 val1의 값

    // val1         →  값 자체          (5)
    // &val1        →  val1의 주소      (0x...)     
    // ptr1         →  주소를 담은 변수 (0x...)
    // *ptr1        →  주소로 가서 꺼낸 값 (5)

    // & 아래 경우들은 const 위치를 기준으로 설명 및 외우는 팁
    // const int* ptr;  // const가 왼쪽 → 값을 못 바꿈
    // int* const ptr;  // const가 오른쪽 → 포인터를 못 바꿈
    // const int* const ptr; // 둘 다 const → 둘 다 못 바꿈
    // ! 경우 1
    // const int* ptr1 = &val1;
    // → ptr1은 val1의 주소를 가리키지만, const 때문에 *ptr1 = 10; 같은 변경 불가
    // → 즉, ptr1을 통해서는 val1의 값을 못 바꿈 (val1 = 10; 은 가능)
    int val1a = 5;
    const int* cptr1 = &val1a;
    // *cptr1 = 10; // 에러! const라서 cptr1로 val1a의 값을 못 바꿈
    cout << cptr1 << endl; // cptr1의 값은 val1a의 주소만 가리킴 (val1a의 값을 변경할 수 없음)
    val1a = 10;            // 변수 직접 변경은 가능
    cptr1 = &val1;         // 참조 대상 변경은 가능

    // ! 경우 2
    int val2a = 10;
    int* const cptr2 = &val2a; // 변수 변경 가능
    // cptr2 = &val2a; // 에러! cptr2는 const라서 참조 대상 변경 불가

    *cptr2 = 20;


    return 0;
}