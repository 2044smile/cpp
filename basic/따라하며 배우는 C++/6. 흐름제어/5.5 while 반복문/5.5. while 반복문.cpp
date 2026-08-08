#include <iostream>

using namespace std;

int main()
{
    //^ while
    // while(1)     // true or 1
    // {
    //     static int count = 0;   // static 초기화 최초 1회만, 프로그램 종료까지 유지, 데이터 영역, 이전 값 유지
    //     cout << count << endl;
    //     ++count;

    //     if (count == 10) break;
    // }

    //^ goto 
    // int count = 0;
    // tryAgain :
    // count++;
    // if (count <= 10)
    //     goto tryAgain;

    // cout << count << endl;

    //^ unsigned
    // cout << "While-loop test" << endl;
    // unsigned int count = 10;

    // while (count >= 0)
    // {
    //     if (count == 0) cout << "zero";
    //     else cout << count << " ";

    //     count--;
    // }

    //^ while문 % 5
    // int count = 0;

    // while (count <= 100)
    // {
    //     if (count % 5 == 0) cout << "Hello : " << count << endl;
    //     count++;
    // }

    int outer_count = 1;

    while(outer_count <= 5)
    {
        int inner_count = 1;
        while (inner_count <= outer_count)
        {
            cout << inner_count++ << " ";
        }
        cout << endl;
        ++outer_count;
    }

    return 0;
}
