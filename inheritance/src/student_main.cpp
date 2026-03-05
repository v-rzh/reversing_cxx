#include <iostream>
#include <inheritance.hpp>


int main(void)
{
    Student s;
    s.set_name("Beth");
    s.set_age(20);
    s.set_dorm("Sandwich Hall");
    s.set_year(2026);

    std::cout << "Name:\t" << s.get_name() << std::endl;
    std::cout << "Age:\t" << s.get_age() << std:: endl;
    std::cout << "Dorm:\t" << s.get_dorm() << std:: endl;
    std::cout << "Year:\t" << s.get_year() << std:: endl;
    return 0;
}




