INHERIT=inheritance
HELLO=hello_class

.PHONY: all clean

all:
	make -C $(INHERIT)
	make -C $(HELLO)

clean:
	make -C $(INHERIT) clean
	make -C $(HELLO) clean
