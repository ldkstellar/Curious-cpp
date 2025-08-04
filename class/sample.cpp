#include <iostream>

class Animal {
 public:
  virtual void speak() = 0;

 private:
  int mAge;
};

class Dog : public Animal {
 public:
  void speak() { std::cout << "bark bark" << std::endl; }
  Dog() = delete;
  Dog(std::string name) : name(name) {}

 private:
  std::string name;
};
int main(int argc, char const *argv[]) {
  Dog dog("puppy");
  dog.speak();
  return 0;
}
