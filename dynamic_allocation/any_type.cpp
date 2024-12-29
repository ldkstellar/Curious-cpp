#include <iostream>

template <typename T>
T *createArray(size_t size)
{
    return new T[size];
}

int main(int argc, char const *argv[])
{
    size_t required_size = 100;
    void *new_men = malloc(required_size);
    int *int_men = (int *)new_men;
    free(new_men); // cStyle

    int *array = createArray<int>(5); // cpp 버전 17이하

    /* code */

    return 0;
}
