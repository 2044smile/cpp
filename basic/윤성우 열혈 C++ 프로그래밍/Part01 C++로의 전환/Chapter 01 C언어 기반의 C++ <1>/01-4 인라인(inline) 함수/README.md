# 01-4 인라인(inline) 함수

> `#define`은 타입 검사가 없어서 위험한 버그가 생길 수 있다 -> `선행처리`
> C++에서는 `inline` 키워드나 `constexpr`를 사용하는 게 훨씬 안전하다 -> `컴파일러`
> 인라인 함수는 컴파일러가 처리하고 에러 메시지를 띄워준다. 즉, 디버깅이 용이하다

## 매크로 함수의 장점과 함수 inline 선언

```cpp
#define SQUARE(x) ((x)*(x)) // 컴파일 시점에 함수 호출 코드 자체를 없애버린다

int main(void)
{
    std::cout << SQUARE(5) << std::endl;
    // 선행처리 결과 아래와 같이 변경된다
    std::cout << ((5)*(5)) << std::endl; // 함수 호출 없이 그냥 계산식으로 바꿔버림
    return 0;
}
// ---
inline int SQUARE(int x)
{
    return x*x;
}
int main(void)
{
    std::cout << SQUARE(5) << std::endl;
    std::cout << SQUARE(12) << std::endl;
    return 0;
}
```

### 장점

- 함수가 인라인화 되어 성능의 향상으로 이어질 수 있다 

```txt
함수 호출이 내부적으로 하는 일 (스택 프레임)

main() 실행 중...
    ↓
1. 현재 위치(주소) 저장 <- 스택에 push
2. 매개변수 값들 스택에 push <- 스택에 push
3. 함수 위치로 점프
    ↓
함수 실행...
    ↓
4. 반환값 처리
5. 스택 정리 (pop)
6. 저장해뒀던 주소로 복귀 <- main()으로 돌아옴
```

### 단점

- 함수의 정의 방식이 일반함수에 비해서 복잡하다. 따라서 복잡한 함수의 정의에는 한계가 있다
- 호출한 모든 자리에 코드를 복붙하기 때문에 함수가 복잡하거나 호출 횟수가 많으면 실행 파일 크기가 커집니다

```cpp
inline int SQUAre(int x) { return x * x; }

square(a);  // 여기에 코드 복사
square(b);  // 여기에 코드 복사
square(c);  // 여기에 코드 복사
```

## 인라인 함수에는 없는 매크로 함수만의 장점

```cpp
#define SQUARE(x) ((x)*(x))
//   ↓ 매크로 함수는 자료형에 독립적이다
std::cout << SQUARE(12);    // int형 함수 호출
std::cout << SQUARE(3.15);  // double형 함수 호출
// inline 선언된 함수를 위의 형태로 호출하려면, 각 자료형 별로 함수가 오버로딩 되어야 한다. 
// 즉, 매크로 함수와 달리 자료형에 독립적이지 못하다
template <typename T>
inline T SQUARE(T x)
{
    return x*x;
}
// inline 함수를 자료형에 독립적으로 선언하는 방법
```
