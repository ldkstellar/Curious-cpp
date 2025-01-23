#include <iostream>

using namespace std;

class Vector
{

private:
    /* data */
    int y;

    int x;

public:
    Vector();
    ~Vector();
    void print();
};

void Vector::print()
{
    cout << x << y << endl;
}

Vector::Vector(/* args */)
{
    x = 1;
    y = 1;
}

Vector::~Vector()
{
}

int main(int argc, char const *argv[])
{
    // 포인터로 접근하는 방법
    Vector myList[4] = {Vector(), Vector(), Vector(), Vector()};
    Vector *myListPtr = myList;

    for (size_t i = 0; i < 4; i++)
    {
        myList[i].print(); // 객체 자체의 멤버에 접근 할 때

        (*myListPtr).print(); // 연산자 우선순위 때문이다. 멤버 변수를 접근하는데 우선이다.

        myListPtr->print(); // 객체를 가르키는 포인터를 통해서 멤버변수를 접근 위의 연산을 함축 시킨 것이다.

        ++myListPtr; // 증가 함수
    }
    cout << "end stack" << endl;

    // heap에 저장하는 방법 2가지

    Vector *firstHeap = new Vector[3]; // 클래스 공간만큼 차지 한다.
    Vector *temp = firstHeap;

    for (size_t i = 0; i < 3; i++)
    {
        firstHeap->print();   // 포인터로 접근하는 방법
        (*firstHeap).print(); // 객체에서 바로 접근하는 방법
        ++firstHeap;          //
    }
    cout << "first store heap method" << endl;

    Vector **secondHeap = new Vector *[3]; // vector 포인터를 저장하는 방식
    Vector **secondHeapPtr = secondHeap;

    for (size_t i = 0; i < 3; i++)
    {
        secondHeap[i] = new Vector();
        secondHeap[i]->print();
        secondHeap[i]->print(); // 객체를 가르키는 포인터로 접근
        (*secondHeap)->print(); // 객체
    }

    for (size_t i = 0; i < 3; i++)
    {
        secondHeap[i][0].print();
    }

    for (size_t i = 0; i < 3; i++)
    {
        (**secondHeapPtr).print();
        ++secondHeapPtr;
    }
    cout << "second store heap method" << endl;

    delete[] temp;
    delete[] secondHeap;

    cout << "end program" << endl;

    return 0;
}
