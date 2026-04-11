#include <iostream>

using namespace std;

int getPrice(bool onSale)
{
    if (onSale) 
        return 10;
    else 
        return 100;
}

int main()
{
    // float: 4 bytes -> 32 bits
    float a;

    // sizeof(float);  // 데이터 타입
    // sizeof(a);      // 변수

    cout << sizeof(float) << endl;
    cout << sizeof(a) << endl;
    cout << "--------------------" << endl;

    //* comma operator
    int x = 3;
    int y = 10;
    int z = (++x, ++y); // 앞에 꺼(x)를 계산하고, 뒤에 꺼(y)를 계산하고 y가 z에 저장된다

    cout << x << endl;  // 4
    cout << y << endl;  // 11
    cout << z << endl;  // 11

    cout << "--------------------" << endl;
    int a1 = 1, b1 = 10;
    int z1;

    //! warning: expression result unused b1;
    // z1 = a1, b1;    // 정리하면 `=` 와 `,`의 우선순위 문제 현업에서 쉼표 연산자를 잘 안 쓰는 이유 중 하나
    z1 = (++a1, a1 + b1);   // 우선순위 때문에 뒤 표현식 결과가 z1에 저장된다
    
    cout << z1 << endl;

    cout << "--------------------" << endl;
    // conditional operator
    bool onSale = true;
    //! 삼항 연산자는 "값"을 반환하므로 const 가능
    //                 조건             true:false
    // const int price = (onSale == true)? 10 : 100;

    // int price;
    //! if문은 "실행"이라 const 불가
    // if (onSale)
    //     price = 10;  //! 에러 - const는 선언과 동시에 초기화해야 함
    // else 
    //     price = 100;

    const int price = getPrice(onSale);

    cout << price << endl;

    cout << "--------------------" << endl;

    int x1 = 5;

    //! 연산자 우선순위 때문에 괄호를 하나 더 만들어야한다
    cout << ((x % 2 == 0) ? "even" : "odd") << endl;
    //! 타입이 다른 경우에는 사용하지 않는 것이 좋다
    cout << ((x % 2 == 0) ? 0 : "odd") << endl;

    return 0;
}