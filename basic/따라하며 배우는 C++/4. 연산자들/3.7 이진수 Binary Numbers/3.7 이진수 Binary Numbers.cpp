#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int X;
    int cnt = 0;
    stack<int> my_s;
    int temp;

    cout << "Enter Number (Decimal) : ";
    cin >> X;

    while(X != 0)
    {
        if (X % 2 == 1) // 나머지가 1
            my_s.push(1);
        else
            my_s.push(0);

        X /= 2;         // X가 0이 될 때 까지 2로 계속해서 나눈다
    }
    cout << "to Binary : ";

    while(!(my_s.empty()))
    {
        cout << my_s.top();
        my_s.pop();
    }

    return 0;
}