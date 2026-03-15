#pragma once // 헤더 가드

// 전처리기 include 가 되어 있다면 다시 include 하지 않도록 하는 헤더 가드
// 번거롭기 때문에 #pragma once 를 사용한다
// #ifndef ADD_H  
// #define ADD_H

int add(int a, int b)
{
    return a + b;
}

// #endif // ADD_H