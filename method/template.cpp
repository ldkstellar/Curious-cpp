#include <iostream>
using namespace std;
template <typename T>
void check_type(T &value)
{
    if (is_same<T, int>::value)
    {
        cout << "Type is int!" << endl;
    }
    else if (is_same<T, double>::value)
    {
        cout << "Type is double!" << endl;
    }
    else
    {
        cout << "Unknown type!" << endl;
    }
}

int main()
{
    int int_value = 42;
    double double_value = 3.14;
    string str_value = "hello";

    check_type(int_value);    // 출력: Type is int!
    check_type(double_value); // 출력: Type is double!
    check_type(str_value);    // 출력: Unknown type!

    return 0;
}
