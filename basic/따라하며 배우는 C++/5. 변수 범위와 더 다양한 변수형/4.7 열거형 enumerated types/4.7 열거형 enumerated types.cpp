#include <iostream>
#include <typeinfo>
#include <string>

// ❌ 문제가 있는 방식: int로 받으면 어떤 값이든 허용됨
int computeDamange(int weapon_id) {
    if(weapon_id == 0) // sword
    {
        return 1;
    };

    if (weapon_id == 1) // hammer
    {
        return 2;
    };

    return 0;
};

enum Color // user-defined data types
{
    // COLOR_BLACK = -1,   // default value is 0, but we can change it
    COLOR_BLACK,
    COLOR_BLUE,
    COLOR_RED,
    COLOR_GREEN,
};

enum Feeling
{
    HAPPY,
    SAD,
    ANGRY,
};

// ✅ enum class: 범위가 지정된 열거형 (C++11~)
// 다른 enum과 이름 충돌 없음, 타입 안전성 강화
enum class WeaponType
{
    SWORD,
    HAMMER,
    BOW,
};

// ✅ switch + enum 조합: if-else보다 가독성 좋음
int computeDamageWithEnum(WeaponType weapon) {
    switch (weapon) {
        case WeaponType::SWORD:  return 1;
        case WeaponType::HAMMER: return 2;
        case WeaponType::BOW:    return 3;
    }
    return 0;
};

// ✅ struct + enum: OOP의 시작점 (객체가 상태를 가진다)
struct Player {
    std::string name;
    WeaponType  weapon;
    int         hp;
};

std::string weaponName(WeaponType weapon) {
    switch (weapon) {
        case WeaponType::SWORD:  return "Sword";
        case WeaponType::HAMMER: return "Hammer";
        case WeaponType::BOW:    return "Bow";
    }
    return "Unknown";
};

int main() {
    using namespace std;

    // computeDamange의 문제점
    // 1. 숫자가 무엇을 의미하는지 알 수 없음
    computeDamange(0);
    // 2. 잘못된 값을 막을 수 없음
    computeDamange(-1);
    // 그렇기에 열거형으로 표현하는 것이 좋음

    // ---
    Color my_color1 = COLOR_BLACK;
    Color my_color2(COLOR_BLUE);
    Color my_color3{COLOR_RED};

    // my_color3 = 0;   // error: cannot convert from 'int' to 'Color'
    my_color3 = static_cast<Color>(0);   // C-style cast, but not recommended

    cout << my_color1 << " " << COLOR_BLACK << endl;    // 0 0
    cout << my_color2 << " " << COLOR_BLUE << endl;     // 1 1
    cout << my_color3 << " " << COLOR_RED << endl;      // 0 2 static_cast로 강제 변환했기 때문에 0이 출력됨

    cout << "----------" << endl;
    int in_number;
    cin >> in_number;   // 0

    if (in_number == COLOR_BLACK) {
        cout << "BLACK" << endl;
    }
    if (in_number == COLOR_BLUE) {
        cout << "BLUE" << endl;
    }
    if (in_number == COLOR_RED) {
        cout << "RED" << endl;
    }

    cout << "---------- enum class ----------" << endl;

    // enum class: 반드시 WeaponType:: 접두사 필요
    WeaponType my_weapon = WeaponType::SWORD;
    cout << "damage: " << computeDamageWithEnum(my_weapon) << endl;  // 1

    // computeDamageWithEnum(0);      // 에러: int를 WeaponType에 넣을 수 없음
    // computeDamageWithEnum(HAPPY);  // 에러: Feeling 타입도 안 됨

    cout << "---------- struct + enum ----------" << endl;

    // struct 안에 enum을 넣어 객체가 상태를 가지게 함 (OOP의 시작)
    Player p1 = {"홍길동", WeaponType::HAMMER, 100};
    Player p2 = {"이순신", WeaponType::BOW,    150};

    cout << p1.name << " | weapon: " << weaponName(p1.weapon) << " | hp: " << p1.hp << endl;
    cout << p2.name << " | weapon: " << weaponName(p2.weapon) << " | hp: " << p2.hp << endl;

    return 0;
}