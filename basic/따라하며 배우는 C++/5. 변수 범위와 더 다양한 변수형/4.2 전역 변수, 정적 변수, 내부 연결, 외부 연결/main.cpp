#include <iostream>
#include "main.h"   // config.h 보고 컴파일 -> 나중에 링커가 config.cpp와 연결

using namespace std;

int g_a = 11; // 전역 변수 (global variable)

void add() { g_a++; }
void minus() { g_a--; }

int main() {
    int a = 10; // 지역 변수 (local variable)
    int b = 20;

    cout << "g_a: " << g_a << endl; // 11
    cout << "a: " << a << endl; // 10
    cout << "b: " << b << endl; // 20

    add();
    add();
    cout << "g_a: " << g_a << endl; // 13
    cout << "Config:width " << Config::width << ", height: " << Config::height << endl;
}