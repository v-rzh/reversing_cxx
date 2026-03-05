#include <iostream>
#include "inheritance.hpp"


int main(void)
{
    Lecturer l;
    l.set_name("Charlie");
    l.set_age(43);
    l.set_lecture_name("c++ re");
    l.set_lecture_duration(1);

    std::cout << l.get_name() << std::endl;
    std::cout << l.get_age() << std:: endl;
    std::cout << l.get_lecture_name() << std:: endl;
    std::cout << l.get_lecture_duration() << std:: endl;
    return 0;
}




