#include <iostream>
#include "car.hpp"

Car::Car(const std::string name, const int id)
{
    Car::name = name;
    Car::id = id;
}

void Car::print()
{
    std::cout << "name: " << name << " id: " << id << std::endl;
}
