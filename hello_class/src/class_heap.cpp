#include <iostream>

class HelloClass {
    public:
        int integer;
        void *ptr;
        HelloClass(void);
        ~HelloClass(void);
        int get_integer(void);
        void *get_ptr(void);
        int set_integer(int i);
        int set_integer(const char *i);
        int set_ptr(void *p);
        void reset(void);
    private:
        int default_integer;
        void *default_ptr;
};

HelloClass::HelloClass(void)
{
    default_integer = 0xffffffff;
    default_ptr = malloc(32);
}

HelloClass::~HelloClass(void)
{
    default_integer = 0xffffffff;
    if (default_ptr) {
        free(default_ptr);
        default_ptr = 0;
    }
}

int HelloClass::get_integer(void)
{
    return integer;
}

void *HelloClass::get_ptr(void)
{
    return ptr;
}

int HelloClass::set_ptr(void *p)
{
    if (!p)
        return -1;
    ptr = p;
    return 0;
}

int HelloClass::set_integer(int i)
{
    if (!i)
        return -1;

    integer = i;
    return 0;
}

int HelloClass::set_integer(const char *i)
{
    if (!i)
        return -1;

    integer = atoi(i);
    return 0;
}
void HelloClass::reset(void)
{
    integer = default_integer;
    ptr = default_ptr;
}

int main(void)
{
    HelloClass *hello_class = new HelloClass();

    hello_class->set_integer(32);

    std::cout << "Integer:\t" << hello_class->get_integer()
              << std::endl;

    hello_class->set_integer("67");
    hello_class->set_ptr((void*)0xaaaaaaaa);

    std::cout << "Integer:\t" << hello_class->get_integer()
              << std::endl;
    std::cout << "Pointer:\t" << hello_class->get_ptr()
              << std::endl;

    hello_class->reset();

    std::cout << "Reset integer:\t"
              << hello_class->get_integer()
              << std::endl;
    std::cout << "Reset pointer:\t"
              << hello_class->get_ptr()
              << std::endl;
    /* Commented out for the lecture
     * Uncomment to see how destruction works
     */
    // delete hello_class;
    return 0;
}
