// 문제 3
// 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자.
// 예를 들어 사용자가 5를 입력한다면 구구단에서 5단을 출력해야 한다.
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    cout << num << "단" << '\n';

    for (int i=1; i<=9; i++)
        cout << num << " * " << i << " = " << num*i << '\n';
}
