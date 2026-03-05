#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include <inheritance.hpp>

Person::Person(void)
{
    name = (char *) allocate_mem();
    age = 0;
}

Person::~Person(void)
{
    if (name) {
        free(name);
        name = NULL;
    }
}

void *Person::allocate_mem(void)
{
    void *ret = malloc(128);

    if (!ret)
        fprintf(stderr, "Malloc failed: %s\n", strerror(errno));

    return ret;
}

char * Person::get_name(void)
{
    return name;
}

int Person::set_name(const char *n)
{
    if (!n || !name) 
        return -1;

    snprintf(name, 128, "%s", n);
    return 0;
}

void Person::set_age(int a)
{
    age = a;
}

int Person::get_age(void) {
    return age;
}
