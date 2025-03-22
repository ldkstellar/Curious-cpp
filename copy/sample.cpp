#include <iostream>


struct Box{
    int a;
    int b;
    char* str;  // 포인터를 가진 멤버
};

int main() {
    // 동적 메모리 할당
    Box box1 = {10, 112, "Hello"};
    
    // box1을 box2에 얕은 복사
    Box box2 = box1;

    // box2의 str 값 수정


    // box1과 box2 출력
    printf("box1: a = %d, b = %d, str = %s\n", box1.a, box1.b, box1.str);
    printf("box2: a = %d, b = %d, str = %s\n", box2.a, box2.b, box2.str);
    
    return 0;
}