#include <iostream>

using namespace std;

enum class Colors
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE
};

void printColorName(Colors color)
{
    //! if 문 귀찮다
    // if(color == Colors::BLACK)
    //     cout << "Black" << endl;
    // else if(color == Colors::WHITE)
    //     cout << "White" << endl;
    // else if(color == Colors::RED)
    //     cout << "Red" << endl;
    
    //* switch
    // {
    //     switch (color)
    //         {
    //             case Colors::BLACK: 
    //                 cout << "BLACK";
    //                 break;
    //             case Colors::WHITE: 
    //                 cout << "WHITE";
    //                 break;
    //             case Colors::RED: 
    //                 cout << "RED";
    //                 break;
    //             case Colors::GREEN: 
    //                 cout << "GREEN";
    //                 break;
    //             case Colors::BLUE: 
    //                 cout << "BLUE";
    //                 break;
    //         }
    //         cout << endl;
    // }

    //* 위 작성한 코드는 Colors::BLACK 불편 static_cast 사용하여 switch
    switch (static_cast<int>(color))
    {
        case 0:
            cout << "BLACK" << endl;
            break;
        case 1:
            cout << "WHITE" << endl;
            break;
        case 2:
            cout << "RED" << endl;
            break;
        case 3:
            cout << "GREEN" << endl;
            break;
        case 4:
            cout << "BLUE" << endl;
            break;
    }
};

int main()
{
    int x;
    cin >> x;
    {
        switch (x)  //! x=0이 업력 되었고 break;가 없다면 ZeroOneTwo 출력
            {
            case 0:
                cout << "Zero";
                break;
            case 1:
                cout << "One";
                break;
            case 2:
                cout << "Two";
                break;
            default:
                cout << "Undefined input " << x;
            };
        cout << endl;
    }
    cout << "------------------" << endl;
    printColorName(Colors::WHITE);
    cout << "------------------" << endl;
    int y;
    cin >> y;
    switch(y)
    {
        case 0:
        {
            int z = 5;
            z = z + y;
            cout << z << endl;
            break;
        }
        case 1:
        {
            int z = 5;
            z = z - y;
            cout << z << endl;
            break;
        }
        default:
            cout << "Undefined input " << x << endl;
    }

    return 0;
}