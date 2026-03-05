CXX=g++

.PHONY: clean

BINS=class_ot class_global class_heap class_stack

all: $(BINS)

%: src/%.cpp
	$(CXX) $^ -o $@

clean:
	-rm $(BINS)

