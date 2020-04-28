all: Lab9
	# cppcheck --enable=warning,performance,portability --error-exitcode=1 -v .

Lab9: Term.o Lab9.o
	# g++ -Werror -Wall -O0 Lab9.o -o Lab9
	# g++ -Werror -Wall -O3 Lab9.o -o Lab9
	# g++ -Werror -Wall Lab9.o -o Lab9
	# g++ -Wall Lab9.o -o Lab9
	g++ -O0 -Wall -Wextra -Werror -pedantic Term.o Lab9.o -o Lab9
	# valgrind ./Lab9

Lab9.o: Lab9.cpp Term.h
	# g++ -Werror -Wall -O0 -c Lab9.cpp
	# g++ -Werror -Wall -O3 -c Lab9.cpp
	# g++ -Werror -Wall -c Lab9.cpp
	# g++ -Wall -c Lab9.cpp
	g++ -Wall -Wextra -Werror -pedantic -c Lab9.cpp


Term.o: Term.cpp Term.h
	# g++ -Werror -Wall -O0 -c Term.cpp
	# g++ -Werror -Wall -O3 -c Term.cpp
	# g++ -Werror -Wall -c Term.cpp
	# g++ -Wall -c Term.cpp
	g++ -Wall -Wextra -Werror -pedantic -c Term.cpp
	

clean:
	rm -rf *.o