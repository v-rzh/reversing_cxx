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

class Student : public Person {
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

class Lecturer : public Person {
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

class Prof : public Lecturer {
    bool tenure;
    public:
        int set_name(const char *name) override;
        int set_lecture_name(const char *lecture) override;
        virtual void set_tenure(bool t);
        virtual bool get_tenure(void);
};

#endif
