CC=gcc
FLAGS= -Wall -g

all: mymaths mymathd mains maind	

mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
mymaths: libmyMath.a
mymathd: libmyMath.so
libmyMath.so: basicMath.o power.o myMath.h
	$(CC) -shared -o libmyMath.so -fPIC basicMath.o power.o myMath.h
libmyMath.a: basicMath.o power.o myMath.h
	ar -rcs libmyMath.a basicMath.o power.o myMath.h	
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean

clean:
	rm -f *.o *.a *.so mains maind
