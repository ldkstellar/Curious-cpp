#include <iostream>

void modifyPointer(int *&ptr) // cpp03은  NULL =0 이다. cpp11부터 nullptr이 될 수 없다. 런타임오류가 발생이 된다. 즉, 포인터변수의 참조값을 가져온다.즉 해당 원본 포인터 변수에 할당된 메모리의 값을 변경 할수 있는것이다.
{
    int b = 20;
    std::cout << "no convert: " << *ptr << std::endl;
    ptr = &b; // 포인터를 다른 주소로 변경
}

void returnbDoublePointer(int **ptr)
{
    std::cout << "no convert: " << **ptr << std::endl;
    int b = 200;
    **ptr = b; // 해당 주소에 값을 변경
}

int main()
{
    int a = 10;    // rvalue는 10
    int *ptr = &a; // 포인터는 lvalue = lvalue이다.

    std::cout << *ptr << std::endl; // 10 출력
    modifyPointer(ptr);             // ptr을 다른 값으로 변경
    std::cout << *ptr << std::endl; // 20 출력 (ptr이 b를 가리킴)
    std::cout << std::endl;
    int b = 100;
    int *pointer = &b;                         // lvalue <- lvalue
    int **doublePointer = &pointer;            // lvalue <- lvalue 포인터 변수의 주소값 변수에 할당된 주소 값이 아니다. **doublePointer는 b의 값이다. *doublePointer는 pointer 즉, &b이며 **doublePointer는 b이다.
    std::cout << **doublePointer << std::endl; // 100 출력
    returnbDoublePointer(doublePointer);
    std::cout << **doublePointer << std::endl; // 200 출력
    return 0;
}
