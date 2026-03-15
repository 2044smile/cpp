#include <iostream>

namespace tSpace
{
    namespace innerSpace
    {
        int func(int a, int b)
        {
            return 0;
        }
    }
    int doSomething(int a, int b)
    {
        return a + b;
    }
}

// int doSomething(int a, int b)
// {
//     return a * b;
// }

using namespace std;

int main()
{
    using namespace tSpace; // using namespace tSpace; 선언
    using namespace tSpace::innerSpace; // using namespace tSpace::innerSpace; 선언

    cout << tSpace::doSomething(3, 4) << endl; // 7 tSpace::doSomething(3, 4) 호출
    cout << doSomething(3, 4) << endl; // 7 tSpace::doSomething(3, 4) 호출
    cout << func(3, 4) << endl; // 0 tSpace::innerSpace::func(3, 4) 호출
    return 0;
}