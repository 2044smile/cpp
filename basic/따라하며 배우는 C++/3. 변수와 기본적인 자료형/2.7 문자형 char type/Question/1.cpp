// ASCII 표에 들어 있는 여러가지 문자들을 cin/cout으로 입출력 해봅시다.
#include <iostream>

int main()
{
    using namespace std;

    char c1;
    string s1;

    // HelloWorld를 입력하면
    cin >> c1;  //! H 저장
    cin >> s1;  //! elloWorld 저장

    cout << c1 << endl;  // H 출력
    cout << s1 << endl;  // elloWorld 출력

    cout << "-----------------------------" << endl;
    
    // 정수를 ASCII 문자로 변환 출력
    int h = 72;
    int e = 101;
    int l = 108;
    int o = 111;
    int w = 119;
    int r = 114;
    int d = 100;
    cout << (char)h << (char)e << (char)l << (char)l << (char)o << " " 
         << (char)w << (char)o << (char)r << (char)l << (char)d << endl;
}
