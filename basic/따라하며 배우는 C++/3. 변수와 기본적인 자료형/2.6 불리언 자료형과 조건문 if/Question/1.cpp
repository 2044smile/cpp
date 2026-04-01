#include <iostream>

using namespace std;

int main()
{
    cout << std::boolalpha;
    
    int num;
    cout << "input in value: ";
    cin >> num;
    
    //!Failed bool t = num / 2; 몫
    bool t = num % 2; //! 나머지
    if (t)
        cout << "홀수입니다. " << t << endl;
    else
        cout << "짝수입니다. "<< t << endl;


    return 0;
}