#include <cmath>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	// int a = 3, b = 5;
	// int a = 6, b = 1;
	int a = 2, b = 4;
	int result = 0;
	if(a%2 == 1 & b%2 == 1){
		cout << "모두 홀수라면" << endl;
		a = a * a;
		b = b * b;
		result = a + b;
		cout << a << " " << b << " " <<  result << endl;
		return result;
	}
	if(a%2 == 0 & a%2 == 0){
        cout << "모두 홀수가 아니라면" << endl;
        result = abs(a - b);
        cout << a << " " << b << " " << result << endl;
    }
	if((a%2 == 1 & b%2 == 0) | (a%2 == 0 & b%2 == 1)){
		cout << "하나만 홀수라면" << endl;
		a *= 2;
		b *= 2;
		result = a + b;
		cout << a << " " << b << " " << result << endl;
	}
}
//! ---
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    if(a%2 == 1 & b%2 == 1){	//! &(비트 AND): 비트끼리 연산, &&(논리 AND): 조건이 둘 다 참인지 확인
        a = a*a;				// 정답으로 인정된 건 % 연산 결과가 0 또는 1이여서, 숫자끼리 비교할 땐 결과가 다르다
        b = b*b;
        answer = a+b;
    }
    if (a%2 == 0 & a%2 ==0) {
        answer = abs(a-b);
    }
    if((a%2 == 1 & b%2 == 0) | (a%2 == 0 & b%2 == 1)){
        a *= 2;
        b *= 2;
        answer = a+b;
    }
    return answer;
}
//* another answer
#include <cstdlib>	// abs() 함수를 쓰기 위해 포함한 헤더

using namespace std;

int  solution(int a, int b) {
	int answer = 0;

	if(a%2 == 1 && b%2==1) answer = (a*a) + (b*b);
	else if((a%2 == 1 && b%2 == 0) || (a%2 == 0 && b%2 == 1)) answer = 2 * (a+b);
	else answer = abs(a-b);
	return answer;
}
