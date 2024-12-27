#include <iostream>
using namespace std;

class MyObj
{
private:
    /* data */
public:
    string name;
    int age;
    MyObj(string name, int age);
    ~MyObj();
};

MyObj::MyObj(string name, int age)
{
    this->name = name;
    this->age = age;
}

MyObj::~MyObj()
{
    std::cout << "Destructor called" << std::endl;
}

int main(int argc, char const *argv[])
{
    // stack obj
    MyObj myobj("star", 28);

    MyObj *obj = new MyObj("이동규", 27);
    cout << myobj.name << myobj.age << endl;
    cout << obj->name << obj->age << endl;
    delete obj;
    /* code */
    return 0;
}
