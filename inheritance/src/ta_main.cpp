#include <iostream>
#include <inheritance_ta.hpp>


int main(void)
{
    TA ta;
    ta.set_name("Dorothy");
    ta.set_age(23);
    ta.set_lecture_name("C++ Reverse Engineering");
    ta.set_year(2027);
    ta.set_dorm("Fancy TA Apartment");
    ta.set_lecture_duration(4);
    ta.set_papers(23);

    std::cout << "Name:\t\t" << ta.get_name() << std::endl;
    std::cout << "Age:\t\t" << ta.get_age() << std::endl;
    std::cout << "Lecture:\t" << ta.get_lecture_name() << std::endl;
    std::cout << "Duration:\t" << ta.get_lecture_duration() << std::endl;
    std::cout << "Year:\t\t" << ta.get_year() << std::endl;
    std::cout << "Dorm:\t\t" << ta.get_dorm() << std::endl;
    std::cout << "Papers Num:\t" << ta.get_papers() << std::endl;

    return 0;
}
