# 01-5 이름공간에 대한 소개

>> 프로젝트의 진행에 있어서 발생할 수 있는 이름의 충돌을 막을 목적으로 존재하는 것이 이름공간이다

## 이름공간의 기본 원리

```cpp
namespace BestComImpl
{
    void SimpleFunc(void)
    {
        std::cout << "BestCom이 정의한 함수" << std::endl;
    }
}

namespace ProgComImpl
{
    void SimpleFunc(void)
    {
        std::cout << "ProgCom이 정의한 함수" << std::endl;
    }
}

int main(void)
{
    // 범위 지정 연산자
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}
```

## 이름공간 기반의 함수 선언과 정의의 분리

```cpp
// 선언
namespace BestComImpl
{
    void SimpleFunc(void);
}
// 선언
namespace ProgComImpl
{
    void SimpleFunc(void);
}
int main(void)
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}
// 정의
void BestComImpl::SimpleFunc(void)
{
    std::cout << "BestCom이 정의한 함수" << std::endl;
}
// 정의
void ProgComImpl::SimpleFunc(void)
{
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}
```

## 동일한 이름공간 내에서의 함수 호출

```cpp
// 
namespace BestComImpl
{
    void SimpleFunc(void);
}
namespace BestComImpl
{
    void PrettyFunc(void);
}

void BestComImpl::SimpleFunc(void)
{
    // 이름공간을 명시하지 않고 함수를 호출하면, 함수의 호출문이 존재하는 함수와 동일한 이름공간 안에서 호출할 함수를 찾는다
    // 따라서 SimpleFunc 함수 내에서는 이름공간을 명시하지 않은 상태에서 PrettyFunc 함수를 직접 호출할 수 있다
    std::cout << "BestCom이 정의한 함수" << std::endl;
    PrettyFunc();               // 동일한 이름 공간
    ProgComImpl::SimpleFunc();  // 다른 이름 공간
}

void BestComImpl::PrettyFunc(void)
{
    std::cout << "So Pretty!!" << std::endl;
}
```

## 이름공간의 중첩

- 이름공간은 중첩이 가능하다
- 계층적 구조를 갖게끔 이름공간을 구성할 수 있다

```cpp
namespace Parent
{
    int num=2;
    namespace SubOne // Parent::SubOne
    {
        int num=3;   // Parent::SubOne::num
    }
    namespace SubTwo // Parent::SubTwo
    {
        int num=4;   // Parent::SubTwo::num
    }
}
```

## std::cout, std::cin, std::endl

- std:: 라는 이름공간에 선언된 cout, cin, endl
- C++ 표준에서 제공하는 다양한 요소들은 이름공간 std 안에 선언되어 있다

```cpp
namespace std
{
    cout ...
    cin ...
    endl ...
}
```

## using을 이용한 이름공간의 명시

```cpp
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

using namespace std;
```

## 이름공간의 별칭 지정과 전역변수의 접근

```cpp
namespace AAA
{
    namespace BBB
    {
        namespace CCC
        {
            int num1;
            int num2;
        }
    }
}

namespace ABC=AAA::BBB::CCC // 별칭 선언
ABC::num1=10;
ABC::num2=20;
// ---
int val=100;    // 전역 변수 (없는 이름 공간)

int SimpleFunc(void)
{
    int val=20; // 지역 변수
    val+=3;     // 지역 변수 val의 값 3 증가
    ::val+=7;   // 전역 변수 val의 값 7 증가 [!] 범위지정 연산자는 지역변수가 아닌 전역변수 접근에도 사용이 가능하다
}
```
