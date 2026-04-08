#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 4 + 2 * 3;      // 10
    int y = (4 + 2) * 3;    // 18
    int z = 4 + 2 / 3;      // 4
    int c = 3 * 4 / 2;      // 6 Left to right

    int zz = std::pow(2, 3);    // 2의 3제곱: 8
    cout << zz << endl;

    return 0;
}
