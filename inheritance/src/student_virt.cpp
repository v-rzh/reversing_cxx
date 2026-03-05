#include <stdio.h>
#include <stdlib.h>

#include <inheritance_ta.hpp>

Student::Student(void)
{
    dorm = (char *)allocate_mem();
    year = 0;
}

Student::~Student(void)
{
    if (dorm) {
        free(dorm);
        dorm = NULL;
    }
}

char *Student::get_dorm(void)
{
    return dorm;
}

int Student::set_dorm(const char *dorm_name)
{
    if (!dorm_name || !dorm)
        return -1;
    snprintf(dorm, 128, "%s", dorm_name);
    return 0;
}

int Student::get_year(void)
{
    return year;
}

void Student::set_year(int y)
{
    year = y;
}
