all: lab5

lab5: lab5functions.o lab5.o
	gcc -Werror -Wall -O0 lab5functions.o lab5.o -o lab5
	# gcc -Wall lab5functions.o lab5.o -o lab5

lab5.o: lab5.c lab5functions.h
	gcc -Werror -Wall -O0 -c lab5.c
	# gcc -Wall -c lab5.c

lab5functions.o: lab5functions.c lab5functions.h
	gcc -Werror -Wall -O0 -c lab5functions.c
	# gcc -Wall -c lab5functions.c

clean:
	rm -rf *.o