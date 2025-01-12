#pragma once
#include <iostream>

class Car
{
private:
    std::string name;
    int id;
    /* data */
public:
    Car(const std::string name, const int id);
    void print();
};