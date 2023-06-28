#include "Person.h"
#include <iostream>

void Person::Print()
{
    std::cout << "name: " << m_name << ", age: " << m_age << std::endl;
}