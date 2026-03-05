#include <stdio.h>

#include <inheritance_ta.hpp>

void TA::set_papers(int p)
{
    papers = p;
}

int TA::get_papers(void)
{
    return papers;
}

int TA::set_lecture_name(const char *lecture)
{
    if (!lecture || !lecture_name) 
        return -1;
    snprintf(lecture_name, 128, "%s (TA)", lecture);
    return 0;
}
