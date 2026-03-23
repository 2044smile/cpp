// 예제 DefaultValue3.cpp에 정의된 함수 BoxVolume를 매개변수의 디폴트 값 지정 형태가 아닌, 함수 오버로딩의 형태로 재구현해보자
// 물론 main 함수는 변경하지 않아야 하며, 실행결과도 동일해야 한다
#include <iostream>

using namespace std;

// 3개 인자 버전
int BoxVolume(int length, int width, int height)
{
    return length*width*height;
}

// 2개 인자 버전 (height는 1로 고정)
int BoxVolume(int length, int width)
{
    return length*width*1;
}

// 1개 인자 버전 (width와 height는 1로 고정)
int BoxVolume(int length)
{
    return length*1*1;
}

int main(void)
{
    cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
    cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
    cout << "[7, D, D] : " << BoxVolume(7) << endl;
}
