#include <iostream>
#include <string>

using namespace std;

void printPerson(double height, float weight, int age, string name)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
}

// 구조체
struct Person
{
    // 데이터
    //* 기본 값을 지정할 수 있다.
    double  height;
    float   weight;
    int     age;
    string  name;

    // 기능
    void printPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;
    }
};

// void printPerson(Person ps)
// {
//     cout << "Name: " << ps.name << endl;
//     cout << "Age: " << ps.age << endl;
//     cout << "Height: " << ps.height << endl;
//     cout << "Weight: " << ps.weight << endl;
// }

struct Family
{
    Person dad, mom, me;
};

struct Employee     // 2 + (2) + 4 + 8 = 14 bytes // padding으로 인해 16 bytes가 된다.
{
    short   id;     // 2 bytes
    int     age;    // 4 bytes
    double  wage;   // 8 bytes
};

int main()
{
    double  height;
    float   weight;
    int     age;
    string  name;

    Person me{172.6, 70.9f, 31, "Tim Dekay"};
    // printPerson(me);
    me.printPerson();

    Person me2;
    me2 = me;
    me2.printPerson();
    // me.age = 20;
    // me.name = "Tim Dekay";
    // me.height = 1.85;
    // me.weight = 80.0f;
    Person mom;
    Person dad;

    Family f = {dad, mom, me};
    f.dad.printPerson();
    f.mom.printPerson();
    f.me.printPerson();
    cout << "------------------" << endl;
    Employee emp1;
    cout << sizeof(Employee) << endl;   // 16 bytes (패딩으로 인해 2 bytes가 추가됨)

    return 0;
}