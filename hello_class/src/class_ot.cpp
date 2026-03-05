#include <iostream>
#include <stdint.h>

struct val {
    uint64_t one;
    uint64_t two;
    val operator+(val v) {
        val res;
        res.one = one + v.one;
        res.two = two + v.two;
        return res;
    }
};

template<typename T>
class HelloClass {
    public:
        T val;
        HelloClass(T v) : val(v) {}
        ~HelloClass(void) { }
        T get_val(void) { return val; }
        HelloClass<T> operator+(HelloClass<T> &h) {
            return HelloClass<T>(val + h.val);
        }
};

int main(void)
{
    struct val v0, v1;
    v0.one = 1;
    v0.two = 2;
    v1.one = 3;
    v1.two = 4;
    
    HelloClass<int> int_class_0(20);// = new HelloClass(20);
    HelloClass<int> int_class_1(30);
    HelloClass<int> int_res = int_class_0 + int_class_1; 
    HelloClass<struct val> val_class_0(v0);
    HelloClass<struct val> val_class_1(v1);
    HelloClass<struct val> val_class_2 = val_class_0 + val_class_1;

    std::cout << "Int Val0:\t" << int_class_0.get_val() << std::endl;
    std::cout << "Int Val1:\t" << int_class_1.get_val() << std::endl;
    std::cout << "Int ValRes:\t" << int_res.get_val() << std::endl;

    std::cout << "------\n";

    std::cout << "Struct Val:\t" << val_class_0.get_val().one << " " << val_class_0.get_val().two << std::endl;
    std::cout << "Struct Val:\t" << val_class_1.get_val().one << " " << val_class_1.get_val().two << std::endl;
    std::cout << "Struct Val:\t" << val_class_2.get_val().one << " " << val_class_2.get_val().two << std::endl;
    return 0;
}
