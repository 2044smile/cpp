#include <iostream>

using namespace std;

int main() {
    // int x;
    // int x = 10; initialization 
    // int x(123); initialization 
    // x = 10; // assignment(할당, 대입)

    // std::cout << x << std::endl;
    // std::cout << &x << std::endl; // 메모리의 주소 값 출력

    int x = 1;
    x = x + 2;
    std::cout << x << std::endl;

    int y = x;
    std::cout << y << std::endl;

    std::cout << x + y << std::endl;

    int z;
    std::cout << z << std::endl; // 초기화 되지 않은 변수는 쓰레기 값(-155200824)이 출력됨

    cout << "-------------" << endl;
    vector<int> v1 = {1,2,3};
    vector<int> v2 = std::move(v1); //! v1의 자원을 v2에 넘겨라, 대용량 객체 복사 비용을 0에 가깝게 줄인다, 

    cout << "v1 size: " << v1.size() << endl;   //& 0
    cout << "v2 size: " << v2.size() << endl;   //& 3

    //^ 몇 번째 인지 필요하면
    // for (int i = 0; i < v.size(); i++)

    //^ range-based for 값만 필요하면
    for(int i : v1){
        cout << i << endl;
    }
    for(int j : v2){
        cout << j << endl;          // 1, 2, 3
    }

    return 0;
}