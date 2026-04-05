# 3. 변수와 기본적인 자료형 (복습)

## `#include`

- `#include`는 전처리기 지시문으로, 컴파일 전에 해당 헤더 파일의 내용을 그대로 복사해서 붙여 넣는 것과 같다. 즉, 남이 미리 만들어둔 코드를 내 코드에 가져오는 것

```cpp
#include <iostream> // cin, cout - 표준 입출력
#include <iomanip>  // setprecision - 출력 형식 조작
#include <limits>   // numeric_limits - 자료형의 최댓/최솟값
#include <cmath>    // pow, isinf, isnan - 수학 함수
#include <bitset>   // bitset - 비트 단위 출력/조작
```

## 1. bool

`bool b = ture;`

- 내부적으로 그냥 1비트 정보인데, 메모리는 보통 1바이트 차지한다.
- 현업에서 중요한 포인트
- `std::boolalpha`는 로그 찍을 때 `0/1` 대신 `true/false`로 보기 좋게 출력하기 위해 현업에서도 자주 사용한다.

```cpp
// 0이 아닌 모든 정수는 true
if (42) { } // 실행됨
if (0)  { } // 실행 안 됨
if (-1) { } // 실행됨 - 헷갈리기 쉬운 부분

// 실수하기 쉬운 패턴
int* ptr = nullptr;
if (ptr) { } // null 체크를 이렇게 많이 씀
```

## 2. 부동소수점 (float / double / long double)

> 핵심: 컴퓨터는 소수를 근삿값으로 저장한다. 2진수로 표현할 수 없는 수가 있기 때문

|타입|크기|유효 자릿수|
|--|--|--|
|float|4 bytes|~6자리|
|double|8 bytes|~15자리|
|long double|16 bytes|~18자리|

> 부동소수점 비교 절대 `==`쓰지 말 것

```cpp
double a = 0.1 + 0.1 + 0.1;
double b = 0.3;

// 절대 이렇게 하면 안 됨
if (a == b) { } // false가 나올 수 있음

// 이렇게 해야 함
#include <cmath>
if (std::abs(a - b) < 1e-9) { } // 충분히 가까우면 같다고 판단
```

> 돈 계산엔 float/double 쓰지 않는다. 금융 도메인에서는 정수(원 단위, 센트 단위)로 처리하거나 별도의 `decimal` 라이브러리를 쓴다.

```cpp
// 나쁜 예 - 은행 잔고
double balance = 0.1 + 0.2; // 0.300000000004

// 좋은 예 - 센트 단위 정수로
int balance_cents = 10 + 20; // 30 센트 정확함
```

### 특수값 처리

```cpp
double zero = 0.0;
double inf = 5.0 / zero; // inf - "infinity 양의 무한대"
double inf = -5.0 / zero; // -inf - 음의 무한대
double nan = zero / zero; // nan - "Not a Number" 정의할 수 없는 값 그렇기에 자기 자신과도 같지 않다

// nan은 자기 자신과도 같지 않다는 특성이 있음
cout << (nan == nan); // false! - 이래서 isnan() 쓰는 거
#include <cmath>

if (isnan(nan)) {
    cout << "NaN is here!";
}
```
