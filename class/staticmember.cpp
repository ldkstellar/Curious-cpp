#include <iostream>
class MyClass
{
public:
    static int staticVar; // 정적 멤버 변수 선언

    MyClass()
    {
        // 생성자에서 staticVar에 접근 가능
        staticVar++;
    }

    static void showStaticVar()
    {
        // 정적 메서드에서 staticVar에 접근 가능
        std::cout << "Static Variable: " << staticVar << std::endl;
    }
};

// 정적 멤버 변수 정의
int MyClass::staticVar = 0;

int main()
{
    MyClass obj1;
    MyClass obj2;

    obj1.showStaticVar(); // Static Variable: 2
    obj2.showStaticVar(); // Static Variable: 2

    return 0;
}
