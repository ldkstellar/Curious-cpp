#include <iostream>
using namespace std;

class Myclass
{
private:
    int age;
    /* data */
public:
    Myclass(/* args */);
    ~Myclass();
    void print();
};

Myclass::Myclass(/* args */)
{
    age = 10;
}

Myclass::~Myclass()
{
}

void Myclass::print()
{
    cout << age << endl;
}

int main(int argc, char const *argv[])
{
    Myclass my = Myclass();
    my.print();
    Myclass *pointer = new Myclass();
    pointer->print();
    delete pointer;
    /* code */
    return 0;
}
