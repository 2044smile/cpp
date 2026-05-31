#include <iostream>

using namespace std;

int min(int x, int y)
{
    // if(x > y) return y;
    // else return x;
    return (x > y) ? x : y; // 삼항 연산자
}

int main()
{
    int x;
    cin >> x;

    if (x > 10)
    {
        cout << x << " is greater than 10" << endl;
        cout << "Test" << endl;
    }
    else
        cout << x << " is not greater than 10" << endl;

    cout << "--------------------" << endl;
    if (1)  // 1=True
        int x = 5;  // 새 변수(지역 변수) (즉시 소멸), 바깥 x에 영향 없음
    else
        int x = 6;
    
    cout << x << endl;  // 1
    cout << "--------------------" << endl;
    // Chaining 여러 조건을 순서대로 검사; 하나만 실행되면 나머지 건너뜀
    if (x > 10)
        cout << "x is greater than 10" << endl;
    else if (x < 10)
        cout << "x is less than 10" << endl;
    else    // if (x == 10)
        cout << "x is exactly 10" << endl;
    cout << "--------------------" << endl;

    if (x >= 10)
    {
        if (x >= 20)
            cout << x << " is between 10 and 20 " << endl;
        else
            cout << "..." << endl;
    }
    cout << "--------------------" << endl;

    int i, j;
    cin >> i >> j;

    // if (i == j) // 비교 연산자
    if (i > 0 && j > 0) // 논리 연산자
        cout << "both numbers are positive" << endl;
    else if (i > 0 || j > 0)
        cout << "one of the numbers is positive" << endl;
    else
        cout << "Neither number is positive" << endl;
    cout << "--------------------" << endl;
    int q;
    cin >> q;

    if (q > 10)
        cout << "A" << endl;
    else if (q == -1)
    {
        cout << "종료" << endl;
        return 0;   // 종료
    }
    else if (x < 0)
        cout << "B" << endl;
    cout << "--------------------" << endl;

    int min_x, min_y;
    cin >> min_x >> min_y;

    cout << min(min_x, min_y) << endl;
    cout << "--------------------" << endl;

    return 0;
}