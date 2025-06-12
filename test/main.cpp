#include <iostream>
class Animal {
 public:
  Animal(std::string name, int id);
  std::string name;
  int id;
  void print() { std::cout << this->name << this->id; }
  virtual void hello() {}
  virtual ~Animal() = default;
};
Animal::Animal(std::string name, int id) : name(name), id(id) {}
class Dog : public Animal {
 public:
  int dogNum;
  virtual void hello() { std::cout << "이게 다형성이다 임마" << std::endl; }
  Dog(std::string name, int id) : Animal(name, id), dogNum(id) {}
};

int main(int argc, char const *argv[]) {
  Dog dog("chill", 1);
  dog.print();
  Animal any("sad", 1);
  Animal *ptr = &dog;
  ptr->hello();

  Animal *star = new Dog("crazydog", 13);
  star->print();
  star->hello();
  delete star;
  return 0;
}
