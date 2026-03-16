#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int num=20;
    // cout << "Hello Wrold!" << endl; endl flush 발생
    cout << "Hello Wrold!" << '\n'; // 줄바꿈만
    // cout << "Hello " << "World!" << endl;
    cout << "Hello " << "World!" << '\n';
    cout << num << ' ' << 'A';
    cout << ' ' << 3.14 << endl;

    // C++ 입출력(cin, cout)과 C 입출력 (scanf,  printf) 동기화를 끊는다. 즉, 독립적으로 동작
    ios::sync_with_stdio(false); 
    // cout -> [버퍼] -> 화면 출력 이렇게 하는 이유는 출력을 한 번에 하면 성능이 훨씬 좋기 때문
    cin.tie(NULL);

    // 배열 / 여러 입력 받기 
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    return 0;
}