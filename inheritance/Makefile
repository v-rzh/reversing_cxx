CXX=g++
INCLUDE=include
CFLAGS=
LDFLAGS=

.PHONY: clean all

all: person student prof ta

person: src/person.cpp src/person_main.cpp
	g++ $^ -o $@ -I $(INCLUDE) $(CFLAGS) $(LDFLAGS)

student: src/student.cpp src/person.cpp src/student_main.cpp
	g++ $^ -o $@ -I $(INCLUDE) $(CFLAGS) $(LDFLAGS)

prof: src/prof.cpp src/lecturer.cpp src/person.cpp src/prof_main.cpp
	g++ $^ -o $@ -I $(INCLUDE) $(CFLAGS) $(LDFLAGS)

ta: src/ta.cpp src/lecturer_virt.cpp src/person.cpp src/student_virt.cpp src/ta_main.cpp
	g++ $^ -o $@ -I $(INCLUDE) $(CFLAGS) $(LDFLAGS)

clean:
	-rm prof ta student person

