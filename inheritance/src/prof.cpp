#include <stdio.h>
#include <stdlib.h>

#include "inheritance.hpp"

int Prof::set_name(const char *n)
{
    if (!n || !name)
        return -1;

    snprintf(name, 128, "Prof. %s", n);
    return 0;
}

int Prof::set_lecture_name(const char *lecture)
{
    if (!lecture || !lecture_name)
        return -1;

    snprintf(lecture_name, 128, "%s (prof)", lecture);
    return 0;
}

void Prof::set_tenure(bool t)
{
    tenure = t;
}

bool Prof::get_tenure(void)
{
    return tenure;
}

