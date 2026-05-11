#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    //! ' ' (작은따옴표): char 타입, " " (큰따옴표): string 타입
    // ' ' 딱 1글자, " " 여러 글자
    str = "!@#$%^&*(\\\'\"<>?:;";
    cout << str;
    return 0;
}