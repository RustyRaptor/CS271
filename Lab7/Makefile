all: lab6

lab6: textfunctions.o lab6.o
	# gcc -Werror -Wall -O0 textfunctions.o lab6.o -o lab6
	gcc -Werror -Wall -O3 textfunctions.o lab6.o -o lab6
	# gcc -Werror -Wall textfunctions.o lab6.o -o lab6
	# gcc -Wall textfunctions.o lab6.o -o lab6
	# valgrind ./lab6

lab6.o: lab6.c textfunctions.h
	# gcc -Werror -Wall -O0 -c lab6.c
	# gcc -Werror -Wall -O3 -c lab6.c
	gcc -Werror -Wall -c lab6.c
	# gcc -Wall -c lab6.c

textfunctions.o: textfunctions.c textfunctions.h
	# gcc -Werror -Wall -O0 -c textfunctions.c
	gcc -Werror -Wall -O3 -c textfunctions.c
	# gcc -Werror -Wall -c textfunctions.c
	# gcc -Wall -c textfunctions.c

clean:
	rm -rf *.o