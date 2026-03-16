#include <iostream>

using namespace std;

int main(void)
{
    char name[100];
    char lang[200];

    cout << "이름을 입력하세요: ";
    cin >> name;

    cout << "좋아하는 프로그래밍 언어를 입력하세요: ";
    cin >> lang;

    cout << "안녕하세요, " << name << "님!" << endl;
    cout << "좋아하는 프로그래밍 언어는 " << lang << "입니다." << '\n';
    return 0;
}