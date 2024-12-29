#include <iostream>

int SIZE = 10;
using namespace std;

int main(int argc, char const *argv[])
{

    int *arr = new int[SIZE];
    fill(arr, arr + 10, 0); // 초기화 메서드
    for (size_t i = 0; i < SIZE; i++)
    {

        cout << arr[i];
        /* code */
    }
    delete[] arr;

    return 0;
}
