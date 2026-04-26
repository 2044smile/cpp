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
