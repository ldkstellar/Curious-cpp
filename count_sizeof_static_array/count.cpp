#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int arr[3] = {
        0,
    };

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        /* code */
        cout << arr[i];
    }

    return 0;
}
