// https://hoho325.tistory.com/314
#include <iostream>
#include <string>

using namespace std;

// int main() {
//     string str;     // aBc
//     cin >> str;

//     for (int i = 0; i < str.size(); i++) {
//         if ('A' <= str[i] && str[i] <= 'Z') {   //! 'B' -> 'b' 로 변경
//             str[i] += 32; // 대문자 -> 소문자
//         }
//         else if ('a' <= str[i] && str[i] <= 'z') {   //! 'b' -> 'B' 로 변경 -> else if로 변경
//             str[i] -= 32; // 소문자 -> 대문자
//         }
//     }

//     cout << str << endl;

//     return 0;
// }
// ---
// <string> 소문자, 대문자 변환 (tolower, toupper)
int main() {
    string str;     // aBc
    cin >> str;

    for (int i = 0; i < str.size(); i++) {  // str 문자열이니까 size()로 길이 구하기
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] = tolower(str[i]); // 대문자 -> 소문자
        }
        else if ('a' <= str[i] && str[i] <= 'z') {
            str[i] = toupper(str[i]); // 소문자 -> 대문자
        }
    }

    cout << str;
}