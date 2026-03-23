#include <iostream>

using namespace std;

int Adder(int num1=1, int num2=2)
{
    return num1 + num2;
}

int main()
{
    cout << Adder() << endl;        // 3
    cout << Adder(5) << endl;       // 7 *전달되는 인자는 왼쪽에서부터 채워져 나간다
    cout << Adder(3, 5) << endl;    // 8
    return 0;
}