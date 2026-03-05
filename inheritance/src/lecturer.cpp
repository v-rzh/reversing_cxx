#include <stdio.h>
#include <stdlib.h>

#include "inheritance.hpp"

Lecturer::Lecturer(void)
{
    lecture_name = (char *) allocate_mem();
}

Lecturer::~Lecturer(void)
{
    if (lecture_name) {
        free(lecture_name);
        lecture_name = NULL;
    }
}

char *Lecturer::get_lecture_name(void)
{
    return lecture_name;
}

int Lecturer::set_lecture_name(const char *lecture)
{
    if (!lecture || !lecture_name)
        return -1;

    snprintf(lecture_name, 128, "%s", lecture);
    return 0;
}

int Lecturer::get_lecture_duration(void)
{
    return lecture_duration;
}

void Lecturer::set_lecture_duration(int dur)
{
    lecture_duration = dur;
}
