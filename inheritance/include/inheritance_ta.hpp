#ifndef INHERITANCE_HPP
#define INHERITANCE_HPP
class Person {
    public:
        char *name;
        int age;
        Person(void);
        ~Person(void);
        virtual void *allocate_mem(void);
        virtual char *get_name(void);
        virtual int set_name(const char *name);
        virtual int get_age(void);
        virtual void set_age(int age);
};

class Student : virtual public Person {
    char *dorm;
    int year;
    public:
        Student(void);
        ~Student(void);
        virtual char *get_dorm(void);
        virtual int set_dorm(const char *dorm_name);
        virtual int get_year(void);
        virtual void set_year(int y);
};

class Lecturer : virtual public Person {
    public:
        char *lecture_name;
        int lecture_duration;
        Lecturer(void);
        ~Lecturer(void);
        virtual char *get_lecture_name(void);
        virtual int set_lecture_name(const char *lecture);
        virtual int get_lecture_duration(void);
        virtual void set_lecture_duration(int dur);
};

class TA : public Student, public Lecturer {
    int papers;
    public:
        virtual void set_papers(int p);
        virtual int get_papers(void);
        int set_lecture_name(const char *lecture) override;
};
#endif
