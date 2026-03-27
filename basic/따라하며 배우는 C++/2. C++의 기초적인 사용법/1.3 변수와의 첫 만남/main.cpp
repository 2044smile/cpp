#include <iostream>

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

    return 0;
}