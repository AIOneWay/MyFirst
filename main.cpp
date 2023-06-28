#include <iostream>

#include "Person.h"

int main()
{
    std::cout << "Hello World" << std::endl;
    Person p1("Tom", 11);
    p1.Print();
    return 0;
}