#include <iostream>

using namespace std;

int main()
{
    // logical NOT
    bool u = true;
    bool x = true;
    bool y = false;
    bool z = false;

    cout << !x << endl; // false

    // logical AND &&
    cout << (x && y) << endl;   // false
    cout << (y && z) << endl;   // y, z가 둘 다 true 일 때만 true
    cout << (u && x) << endl;   // 둘 다 true이기에 true

    bool hit = true;
    int health = 10;

    if (hit == true && health < 20)
    {
        cout << "die " << endl;
    }
    else
        health -= 20;

    // logical OR ||
    cout << "----------------" << endl;
    bool x1 = true;
    bool y1 = false;

    cout << (x1 || y1) << endl;  // 둘 중 하나만 true 여도 true

    int x2 = 5;
    int y2 = 5;

    if (x2 != y2)
    // if (!(x == y)) true 라는 결과가 나오면 false 로 처리
    {
        cout << " x does not equal y" << endl;
    }
    else
        cout << " x equals y " << endl;

    int v = 1;
    if(v == 0 || v == 1)
        cout << "v is 0 or 1" << endl;

    // short circuit evaluation
    cout << "----------------" << endl;
    int x3 = 1;     // x3=2 로 변경했는데 cout 값은 2가 나온다
    int y3 = 2;

    // 왼쪽, 오른쪽 연산을 하고 && 비교 
    if(x3 == 1 && y3++ == 2)    //! x3=2라면 x3==1 false 데이터가 나오기 때문에 y3++ == 2 연산을 하지 않는다.
    {
        // do something
    }

    cout << y3 << endl;

    cout << "----------------" << endl;
    bool x4 = true;
    bool y4 = false;

    // De Morgan's Law; 드모르간 규칙 분배 규칙이 적용되지 않는다
    !(x && y);  // !(x || y);
    !x && !y;   // !x || !y;

    // XOR (C++ 에는 없다)
    // false false false
    // true false true
    // false true true
    // true true false
    cout << "----------------" << endl;
    bool a1 = true;
    bool b1 = false;
    bool c1 = true;
    bool d1 = false;
    cout << (a1 != b1) << endl; // true=false true
    cout << (b1 != a1) << endl; // false=true ture
    cout << (b1 != d1) << endl; // false=false false
    cout << (a1 != c1) << endl; // true=true false

    return 0;
}