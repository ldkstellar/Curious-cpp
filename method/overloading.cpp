#include <iostream>
using namespace std;

void print(int);
void print(string);
void print(float);
void print();

int main(int argc, char const *argv[])
{

    print(12.1f);
    print("hello");
    print();
    return 0;
}

void print(int value)
{
    cout << value << endl;
}

void print(string value)
{
    cout << value << endl;
}

void print(float value)
{
    cout << value << endl;
}

void print()
{
    cout << "no message" << endl;
}