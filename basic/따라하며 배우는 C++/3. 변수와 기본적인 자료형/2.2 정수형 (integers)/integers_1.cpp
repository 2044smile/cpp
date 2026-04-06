#include <iostream>

using namespace std; 

int main()
{
    unsigned int i = -1;
    cout << i << endl;  // 4294967295, unsigned int 의 최대값이 출력된다. unsigned int 는 음수값을 저장할 수 없기 때문에, -1 이라는 음수값이 unsigned int 로 변환될 때, 최대값으로 변환되는 것이다.

    int j = 20 / 4;  // 5
    int z = 22 / 4;  // int 는 정수형이기 때문에, 22 / 4 는 5.5 가 아니라 5 가 된다. 소수점 이하가 버려지는 것이다.
    cout << 22 / 4 << endl;  // 5 정수끼리의 연산은 정수로 결과가 나온다. 소수점 이하가 버려지는 것이다.
    cout << (float)22 / 4 << endl;  // 정수 둘 중 하나가 float라면 결과는 float 가 된다. 5.5
    
    return 0;
}