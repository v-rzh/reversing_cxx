CXX=g++
CFLAGS=
LDFLAGS=

.PHONY: clean all

BINS=class_ot class_global class_heap class_stack

all: $(BINS)

%: src/%.cpp
	$(CXX) $^ -o $@ $(CFLAGS) $(LDFLAGS)

clean:
	-rm $(BINS)

