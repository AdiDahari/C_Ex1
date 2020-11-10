CC = gcc
AR = ar
FLAGS = -Wall -g
MATHOBJS = basicMath.o power.o
MAINOBJS = main.o

all: mymaths mymathd mains maind
maind: libmyMath.so $(MAINOBJS)
	$(CC) $(FLAGS) -o maind $(MAINOBJS) ./libmyMath.so
mains: libmyMath.a $(MAINOBJS)
	$(CC) $(FLAGS) -o mains $(MAINOBJS) libmyMath.a
mymaths: libmyMath.a
mymathd: libmyMath.so
libmyMath.a: $(MATHOBJS)
	$(AR) -rcs libmyMath.a $(MATHOBJS)
libmyMath.so: $(MATHOBJS)
	$(CC) -shared -o libmyMath.so $(MATHOBJS)
main.o: main.c
	$(CC) $(FLAGS) -c main.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
.PHONY: clean all
clean:
	rm -f *.o *.a *.so mymaths mymathd mains maind