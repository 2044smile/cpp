# 01-1 printf와 scanf를 대신하는 입출력 방식

## 문자열 "Hello World"의 출력

```cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int num=20;
    // cout << "Hello Wrold!" << endl; endl flush 발생
    cout << "Hello Wrold!" << '\n'; // 줄바꿈만
    // cout << "Hello " << "World!" << endl;
    cout << "Hello " << "World!" << '\n';
    cout << num << ' ' << 'A';
    cout << ' ' << 3.14 << endl;

    // C++ 입출력(cin, cout)과 C 입출력 (scanf,  printf) 동기화를 끊는다. 즉, 독립적으로 동작
    ios::sync_with_stdio(false); 
    // cout -> [버퍼] -> 화면 출력 이렇게 하는 이유는 출력을 한 번에 하면 성능이 훨씬 좋기 때문
    cin.tie(NULL);

    // 배열 / 여러 입력 받기 
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    return 0;
}
```


### `endl` vs `\n`

- `endl`은 줄바꿈 + flush 두 가지를 동시에 수행합니다.
- 반복 출력이 많은 PS(알고리즘 문제풀이)에서는 매번 flush가 일어나면 느려지기 때문에, `\n`을 권장합니다

```cpp
cout << "Hello World!" << endl; // \n + flush (버퍼 강제 비우기)
cout << "Hello World!" << '\n'; // \n만 (flush 없음, 더 빠름)
```

### `ios:"sync_with_stdio(false)`

- C++의 `cin/cout`은 기본적으로 C의 `scanf/printf` 와 동기화 되어 있습니다
- 이를 끊으려면 C++ 스트림이 독립적으로 동작하며 속도가 크게 향상됩니다
- 단, 이후에는 `scanf/printf` 와 `cin/cout` 을 섞어 쓰면 안 됩니다

### `cin.tie(NULL)` 상세 설명

- `cout << "데이터";` 버퍼에 쌓임
- `cin >> x;` flush 안 함
    - 계속 버퍼에 쌓여 있음
    - 나중에 버퍼가 꽉 차거나 endl 만날 때 한꺼번에 출력


## 스트림(Stream)이란

- C++은 모든 입력과 출력을 바이트의 흐름으로 간주하여 처리하는데, 이 바이트의 흐름 자체를 스트림(Stream)이라고 한다
- 스트림은 어떤 장치(혹은 파일)와 프로그램 사이를 잇는 호스 같은 매개체입니다
    - 입력 스트림: 키보드 -> 프로그램 방향으로 바이트가 흐름
    - 출력 스트림: 프로그램 -> 모니터 방향으로 바이트가 흐름

### 버퍼(Buffer)란

- 버퍼는 임시로 메모리를 저장하는 메모리 블록으로, 일반적으로 512바이트 또는 그 배수의 크기를 가진다
- 버퍼는 한꺼번에 많은 데이터를 읽어들여 저장해두고, 버퍼가 꽉 차거나 개행문자(\n)를 만나면 자동으로 비워진다
- 이를 버퍼 비우기(flushing the buffer)라고 한다