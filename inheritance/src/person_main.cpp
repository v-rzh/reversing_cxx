#include <iostream>
#include <inheritance.hpp>


int main(void)
{
    Person p;
    p.set_name("Abel");
    p.set_age(32);

    std::cout << "Name:\t" << p.get_name() << std::endl;
    std::cout << "Age:\t" << p.get_age() << std:: endl;
    return 0;
}




