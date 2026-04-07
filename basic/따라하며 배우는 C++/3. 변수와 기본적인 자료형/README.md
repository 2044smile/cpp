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
if (0)  { } // false니까 실행 안 됨
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
double inf = 5.0 / zero; // inf - "infinity, 양의 무한대"
double inf = -5.0 / zero; // -inf - "음의 무한대"
double nan = zero / zero; // nan - "Not a Number" 정의할 수 없는 값 그렇기에 자기 자신과도 같지 않다

// nan은 자기 자신과도 같지 않다는 특성이 있음
cout << (nan == nan); // false! - 이래서 isnan() 쓰는 거
#include <cmath>

if (isnan(nan)) {
    cout << "NaN is here!";
}
```

## 3. 정수형과 Overflow

|타입|크기|범위|
|--|--|--|
|short|2 bytes|-32,768~32,767|
|int|4 bytes|-2.1억~2.1억|
|long long|8 bytes|-922경~922경|

### Overflow는 조용히 버그를 만든다

```cpp
int i = 2147483647 // int 최댓값
i += 1;
cout << i; // -2147483647 - 아무 오류 없이 조용히 뒤집힘
```

- 실제로 게임 점수, 카운터, 타이머 등 값이 계속 증가하는 곳에서 터지는 버그다.
- 큰 수를 다룰 땐 습관적으로 `long long`을 쓰는 게 안전하다.

`long long bigNum = 100000000000LL; // LL 접미사 붙여야 long long 으로 처리됨`

## 4. 고정 크기 정수 (<cstdint>)

- `int`는 플랫폼마다 크기가 다를 수 있다.
- 네트워크, 파일 포맷, 임베디드 등 크기가 중요한 곳에서는 명시적 타입을 쓴다.

```cpp
int i;      // 크기가 정해져 있지 않음 (플랫폼 의존, 컴파일러/OS에 따라 달라짐)

#include <cstdint>

std::int8_t  // 1 bytes
std::int16_t // 2 bytes
std::int32_t // 4 bytes
std::int64_t // 8 bytes

// 주의: int8_t는 내부적으로 char이라 cout이 문자로 출력함
std::int8_t x = 65;
cout << x;                      // 'A' 출력
cout << (int)x;                 // 65 출력
cout << static_cast<int>(x);    // 65 출력 - 현업에서 권장하는 방식
```

### `static_cast` vs C스타일 캐스트 `(int)`

```cpp
// C스타일 - 뭐든 그냥 바꿔버림, 위험
double d = 3.14;
int i = (int)d;

// static_cast - 안전한 변환인지 컴파일러가 확인
int i = static_cast<int>(d);
```

## 3. 정수형과 Overflow
