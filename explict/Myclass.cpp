class Myclass {
 public:
  Myclass(int x) {}
};

class Yourclass {
 public:
  explicit Yourclass(int x) {}
};

void func(Myclass obj) {}
void func(Yourclass obj) {}

int main(int argc, char const *argv[]) {
  func(
      10);  // 암시적으로 컴파일러가 자동으로 생성자를 호출해 타입을 변환해준다.
  func(Yourclass(10));
  return 0;
}
