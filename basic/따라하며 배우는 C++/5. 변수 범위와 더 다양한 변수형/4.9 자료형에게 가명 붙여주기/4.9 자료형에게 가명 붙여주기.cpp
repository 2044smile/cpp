#include <iostream>
#include <cstdint>
#include <vector>

int main()
{
    using namespace std;

    typedef double distance_t;      // _t = type
    // typedef float distance_t;    // 변수의 자료형을 손쉽게 변경 가능

    // std::int8_t i(97);          // _t 가명

    double      my_distance;
    distance_t  home2work;
    distance_t  home2school;
    cout << "------------" << endl;
    //! 기능은 동일하지만 문법과 가독성에서 차이 typedef vs using
    //* 현대 C++에서는 `using`을 사용
    typedef vector<pair<string ,int > > pairlist_t;
    using pairlist_n = vector<pair<string, int> >;

    pairlist_t pairlist1;
    pairlist_t pairlist2;

    // vector<pair<string, int> > pairlist1;
    // vector<pair<string, int> > pairlist2;

    return 0;
}