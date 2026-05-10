#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    int n;
    cin >> str >> n;
    // int i; 로 선언하면 i 에는 그 시점 스택 메모리에 남아있던 쓰레기 값이 들어간다
    //! C++은 Python과 달리 변수를 선언해도 자동으로 0으로 초기화해주지 않습니다. 반드시 직접 초기화해야 합니다
    for(int i=0; i<n; i++){
        cout << str;
    }
    return 0;
}