#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(std::string name, int age) : m_name(name), m_age(age) {}
    void Print();
private:
    std::string m_name;
    int m_age {0};
};

#endif