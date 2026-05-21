#include <iostream>

int main()
{
    using namespace std;

    enum class Color
    {
        RED,    // 0
        BLUE    // 1
    };

    enum class Fruit
    {
        BANANA, // 0
        APPLE   // 1
    };

    Color color = Color::RED;      // 0
    Color color1 = Color::RED;
    Color color2 = Color::BLUE;
    Fruit fruit = Fruit::BANANA;   // 0

    // if (color == fruit)             // 비교가 안되게 막고 있다
    // if (static_cast<int>(color) == static_cast<int>(fruit)) 억지로 비교는 가능
    if (color1 == color2)
    {
        cout << "Color is fruit ? " << endl;
    }
}