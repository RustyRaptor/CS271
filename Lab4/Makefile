all: lab4

lab4: arrayfunctions.o lab4.o
	gcc -Werror -Wall arrayfunctions.o lab4.o -o lab4

lab4.o: lab4.c arrayfunctions.h
	gcc -Werror -Wall -c lab4.c

arrayfunctions.o: arrayfunctions.c arrayfunctions.h
	gcc -Werror -Wall -c arrayfunctions.c

clean:
	rm -rf *.o