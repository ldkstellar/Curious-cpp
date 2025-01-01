#include <iostream>
using namespace std;

void print(int &value)
{

    if (&value == nullptr)
    {
        cout << "novalue" << endl;
        return;
        /* code */
    }
    cout << value << endl;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int *b = nullptr;

    print(*b);
    print(a);
    return 0;
}
