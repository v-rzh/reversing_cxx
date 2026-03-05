CXX=g++
INCLUDE=include

.PHONY: clean

default: person student prof ta

person: src/person.cpp src/person_main.cpp
	g++ $^ -o $@ -I $(INCLUDE)

student: src/student.cpp src/person.cpp src/student_main.cpp
	g++ $^ -o $@ -I $(INCLUDE)

prof: src/prof.cpp src/lecturer.cpp src/person.cpp src/prof_main.cpp
	g++ $^ -o $@ -I $(INCLUDE)

ta: src/ta.cpp src/lecturer_virt.cpp src/person.cpp src/student_virt.cpp src/ta_main.cpp
	g++ $^ -o $@ -I $(INCLUDE)

clean:
	-rm prof ta student person

