#include <iostream>
using namespace std;
class MyClass {
public:
    int a;
    int b;
   MyClass(int a, int b):a(a),b(b){}
};

struct Box
{
    int a;
    int b;
    /* data */
};


int main() {
    MyClass obj1(1,1);  // 첫 번째 객체 초기화
    MyClass obj2(2,2);  // 두 번째 객체 초기화
  
    // 얕은 복사: obj2 = obj1;
    obj2 = obj1;
    cout<<obj2.a << obj2.b<<obj1.a<<obj2.b<<endl;;
    obj2.a =0;
    obj2.b=0;
    cout<<obj1.a<<obj1.b<<endl;

    Box box = {10,112};
  
   
    
    // 여기서 얕은 복사가 이루어짐

    // obj1과 obj2는 동일한 동적 메모리 ptr을 참조하게 됨
    
    // double free에러 즉 같은 주소값
    // std::cout << "obj2.ptr: " << *obj2.ptr << std::endl;

    return 0;
}