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
        - 파일 10개 모두 구현 코드를 통째로 컴파일
        - Stream 함수 하나 수정하면 10개 전부 재컴파일
    - 선언/구현 분리하면?
        - 구현 파일(.cpp) 하나만 재컴파일
        - 나머지 9개는 그대로
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
