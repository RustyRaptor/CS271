all: lab3

lab3: lab3functions.o lab3.o
	gcc -Werror -Wall lab3functions.o lab3.o -o lab3

lab3.o: lab3.c lab3functions.h
	gcc -Werror -Wall -c lab3.c

lab3functions.o: lab3functions.c lab3functions.h
	gcc -Werror -Wall -c lab3functions.c

clean:
	rm -rf *.o