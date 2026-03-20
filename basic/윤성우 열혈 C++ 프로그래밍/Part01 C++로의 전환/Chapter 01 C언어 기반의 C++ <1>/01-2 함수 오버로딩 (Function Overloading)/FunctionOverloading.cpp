#include <iostream>

using namespace std;

void MyFunc()
{
    cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)
{
    cout << "MyFunc(char c) called with c = '" << c << "'" << endl;
}

void MyFunc(int a, int b)
{
    cout << "MyFunc(int a, int b) called a = '" << a << "'" << ", b = '" << b << "'" << endl;
}

int main(void)
{
    MyFunc();
    MyFunc('A');
    MyFunc(12, 13);

    return 0;
}
