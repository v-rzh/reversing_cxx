#include <iostream>
#include <inheritance.hpp>

void set_person_info(Person& p, const char *name, int age) {
    p.set_name(name);
    p.set_age(age);
}
int main(void)
{
    Prof pro;
    set_person_info(pro, "Charles", 50);
    pro.set_lecture_name("Meaning of life");
    pro.set_tenure(true);
    pro.set_lecture_duration(2);

    std::cout << "Name:\t\t" << pro.get_name() << std::endl;
    std::cout << "Age:\t\t" << pro.get_age() << std:: endl;
    std::cout << "Lecture:\t" << pro.get_lecture_name() << std:: endl;
    std::cout << "Duration:\t" << pro.get_lecture_duration() << std:: endl;
    std::cout << "Tenured:\t" << (pro.get_tenure() ? "yes" : "no") << std:: endl;

    return 0;
}




