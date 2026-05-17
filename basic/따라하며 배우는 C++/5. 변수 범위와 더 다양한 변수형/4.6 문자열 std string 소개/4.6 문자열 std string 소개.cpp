#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    //! 출력
    const char my_strs [] = "Hello, World";
    const string my_hello_1 = "Hello, World";
    const string my_hello_2 { "Hello, World" };

    // string my_ID = 123;     // string은 정수를 문자열로 암시적 형변환 하는 방법이 없음
    string my_ID = "123";

    cout << my_strs << endl;
    cout << my_hello_1 << endl;
    cout << my_hello_2 << endl;

    // //! 입력
    // //* 빈 칸이 있는 문자열을 입력하면 eg. Jack Jack 버퍼 안에 담아놨다가 다음 cin에 사용된다
    // cout << "---------" << endl;
    // cout << "Your name ? : ";
    // string name;
    // //* getline은 엔터를 칠 때 까지 입력을 받는다
    // std::getline(std::cin, name);
    // // cin >> name;

    // cout << "Your age ? : ";
    // string age;
    // std::getline(std::cin, age);
    // // cin >> age;

    // cout << name << " " << age << endl;

    //! 정수 입력
    cout << "Your age ? : ";
    int age_1;
    cin >> age_1;
    // std::getline(std::cin, age_1);

    // std::cin.ignore(32767, '\n');   //! \n이 나올 때 까지 32767개의 글자를 무시해라
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    

    cout << "Your name ? : ";
    string name_1;
    //* getline은 엔터를 칠 때 까지 입력을 받는다
    std::getline(std::cin, name_1);

    cout << name_1 << " " << age_1 << endl;

    cout << "---------" << endl;
    string a("Hello ,");
    string b("World ");
    string hw = a + b;  // append
    hw += "I'm Good";

    cout << hw << endl;

    cout << "---------" << endl;
    string c("Hello, World");
    cout << c.length() << endl;

    return 0;
}