#include <iostream>

namespace a {
    int my_var(10);
    int my_a(123);
    //! int cout(123321);   cout 충돌
}


namespace b {
    int my_var(20);
    int my_b(123);
}

int main(){
    using namespace std;
    // using std::cout;
    // using std::endl;

    using namespace a;
    using namespace b;

    // 이름이 같은 경우에 namespace를 명시적으로 지정해서 사용해야 한다
    cout << a::my_var << endl; // 10
    cout << b::my_var << endl; // 20

    //! 영역을 쪼개서 하는 방법
    // {
    //     using namespace a; // a namespace 안에 있는 이름들을 명시적으로 지정하지 않고 사용할 수 있게 해준다
    //     cout << my_var << endl; // 10
    // }

    // {
    //     using namespace b;
    //     cout << my_var << endl; // 20
    // }

    cout << my_a << endl; // 123
    cout << my_b << endl; // 123

    return 0;
}