#include <iostream>
using namespace std;

// 기본(Base) 클래스
class Base {
 public:
  Base() { cout << "Base 생성자 호출" << endl; }
};

// 중간 클래스 1 (가상 상속 O)
class Intermediate1 : virtual public Base {
 public:
  Intermediate1() { cout << "Intermediate1 생성자 호출" << endl; }
};

// 중간 클래스 2 (가상 상속 X)
class Intermediate2 : virtual public Base {
 public:
  Intermediate2() { cout << "Intermediate2 생성자 호출" << endl; }
};

// 최종 클래스
class FinalDerived : public Intermediate1, public Intermediate2 {
 public:
  FinalDerived() { cout << "FinalDerived 생성자 호출" << endl; }
};

int main() {
  FinalDerived obj;
  return 0;
}