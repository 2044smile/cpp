#include <iostream> // cout, cin, endl
#include <cstdio> // printf, scanf


int main() 
{
    using namespace std; // std namespace(이름 공간) 안에 있는 모든 것을 사용하기 위해서 using namespace std; 라고 표기할 수 있음
    //* cout
    int x = 1024;
    double pi = 3.1415926535897932384626433832795;

    cout << "I love this lecture!" << endl; // std namespace(이름 공간) 안에 있는 cout을 사용하기 위해서 :: 으로 표기해야 함
    // << output stream(출력 스트림) 연산자
    // \n 줄 바꿈 문자, std::endl과 같은 역할을 함
    cout << "x is " << x << endl;
    cout << "pi is " << pi << endl;
    cout << "abc" << "\t" << "def" << endl; // \t는 tab(탭) 문자, 줄 사이 띄어쓰기
    cout << "\a"; // \a는 alert(알림) 문자, 경고음이 울림

    //* cin
    int z;
    cin >> z; // >> input stream(입력 스트림) 연산자
    cout << "Your input is " << z << endl; 
    // 10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 
    // int 형의 최대값인 2147483647 출력

    return 0;
}