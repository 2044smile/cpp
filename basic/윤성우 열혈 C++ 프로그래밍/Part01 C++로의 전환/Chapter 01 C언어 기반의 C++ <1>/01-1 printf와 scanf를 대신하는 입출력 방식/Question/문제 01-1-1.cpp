#include <iostream>

using namespace std;

// 문제 1 - 사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성해 보자. 단, 프로그램의 실행은 다음과 같이 이뤄져야 한다
// 1번 정수 입력: 1
// 2번 정수 입력: 2
// 3번 정수 입력: 3
// 4번 정수 입력: 4
// 5번 정수 입력: 5
// 합계: 15

int P1(void)
{
    int sum = 0;
    for(int i=1; i<=5; i++)
    {
        int num;
        cout << i << "번째 정수 입력: ";
        cin >> num;
        sum += num;
    }
    return sum;
}

int main(void)
{
    int result = P1();
    cout << "합계: " << result << '\n';
    return 0;
}