# C++ 추가 학습 및 실습

## 선언(declaration)과 구현(definition)을 분리하는 게 실무 기본

gpu/
 ├── cuda_stream.h      ← 선언만 (무엇이 있는지)
 └── cuda_stream.cpp    ← 구현만 (어떻게 동작하는지)

```cpp
// cuda_stream.h - 선언만
namespace gpu {
    namespace cuda {
        struct Stream {
            int streamId;
        };
        Stream initialize(int id);
    }
}
// cuda_stream.cpp - 구현만
#include "cuda_stream.h"  
// 헤더 파일을 복붙 -> 복붙 됐으니까 같은 네임스페이스 안에서 Stream 바로 호출 가능
// not gpu::cuda::Stream

namespace gpu {
    namespace cuda {
        Stream initialize(int id) {
            Stream s;
            s.streamId = id;
            return s;
        }
    }
}
```

### 왜 선언과 구현을 분리?

1. 컴파일 속도
    - 헤더에 구현까지 있으면?
        - 선언 수정     -> 재컴파일
        - 구현 수정     -> 재컴파일
    - 선언/구현 분리하면?
        - .cpp(구현)  수정 시 -> 해당 .cpp 파일만 재컴파일
        - .h(선언)    수정 시 -> include 한 모든 파일 재컴파일 (불가피)
        - 단, 헤더는 자주 안 바뀌고 구현은 자주 바뀌기 대문에 대부분의 수정이 .cpp 에서 일어남
        - 결과적으로 전체 재컴파일 빈도가 크게 줄어듦
2. 정보 은닉
    - 헤더는 사용 설명서이다
    - `cuda_stream.h` - 사용자한테 보여주는 것
    - `cuda_stream.cpp` - 숨기는 것
        - 실제로 회사에서 라이브러리 배포할 때 `.cpp`는 제공하지 않는다
3. 코드 가독성
    - 헤더만 열어도 이 모듈이 뭘 하는지 한눈에 파악 가능
    - 구현 세부사항 볼 필요 없이 "목차" 처럼 읽힘

## struct란

```cpp
// 하나의 주문을 표현하는 데이터를 하나로 묶어주는 게 struct
int     orderId = 20240322;
double  price   = 35900.0;
bool    isPaid  = false;

struct Order {
    int     orderId;
    double  price;
    bool    isPaid;
}

// Order 라는 새로운 타입이 생김
Order o; // Order o 타입 변수 선언
o.orderId   = 20240322;
o.price     = 35900.0;
o.isPaid    = false;

// 함수에 넘길 때도 하나만 넘기면 됨
void processOrder(Order o) { . . .}
// struct 없으면 이렇게 인자를 다 따로 넘겨야 함
void processOrder(int orderId, double price, bool isPaid) { ... }
```
