# 01-3 매개변수의 디폴트 값

> `int MyFunc(int num1=1, int num2=2 );` default 값

## 디폴트 값은 함수의 선언에만 위치

- 함수의 선언을 별도로 둘 때에는 디폴트 값의 선언을 함수의 선언부에 위치시켜야 한다
- 그 이유는 컴파일러의 컴파일 특성에서 찾을 수 있다
- 컴파일러는 함수의 디폴트 값의 지정 여부를 알아야 함수의 호출 문장을 적절히 컴파일 할 수 있다

### 에러 발생

```cpp
// 선언부에 디폴트 값이 없음 그러므로 20번 째 라인에서 컴파일 에러가 발생
#include <iostream>
using namespace std;
int Adder(int num1, int num2);  

int main(void){
    cout << Adder() << endl;
    cout << Adder(5) << endl;
    cout << Adder(3, 5) << endl;
}

int Adder(int num1=1, int num2=2) 
{
    return num1+num2
}
```

### 정상 동작

```cpp
#include <iostream>
using namespace std;
int Adder(int num1=1, int num2=2);  

int main(void){
    cout << Adder() << endl;
    cout << Adder(5) << endl;
    cout << Adder(3, 5) << endl;
}

int Adder(int num1, int num2) 
{
    return num1+num2
}
```

## 부분적 디폴트 값 설정

- 매개변수의 일부에만 디폴트 값을 지정하고, 채워지지 않은 매개변수에만 인자를 전달하는 것 가능
- 전달되는 인자가 왼쪽에서부터 채워지므로, 디폴트 값은 오른쪽에서부터 채워져야 한다
- 전달되는 인자가 왼쪽에서부터 채워지므로, 오른쪽이 빈 상태로 왼쪽의 매개변수에만 일부 채워진 디폴트 값은 의미를 갖지 못한다, 따라서 컴파일 에러를 일으킨다

```cpp
int YourFunc(int num1, int num2=5, int num3=7) { . . . }

YourFunc(10); // YourFunc(10, 5, 7)
YourFunc(10, 20); // YourFunc(10, 20, 7)

int WrongFunc(int num1=10, int num2, int num3) { . . . }  // (X)
int WrongFunc(int num1=10, int num2=20, int num3) { . . . }  // (X)

WrongFunc(10, 20) // (X)
WrongFunc(10) // (X)
WrongFunc(10, 20, 30) // (O)
```
