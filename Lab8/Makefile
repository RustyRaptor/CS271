all: Calendar
	# cppcheck --enable=warning,performance,portability --error-exitcode=1 -v .

Calendar: Time.o Date.o Calendar.o
	# g++ -Werror -Wall -O0 Time.o Calendar.o -o Calendar
	# g++ -Werror -Wall -O3 Time.o Calendar.o -o Calendar
	# g++ -Werror -Wall Time.o Calendar.o -o Calendar
	# g++ -Wall Time.o Calendar.o -o Calendar
	g++ -O0 -Wall -Wextra -Werror -pedantic Time.o Date.o Calendar.o -o Calendar
	# valgrind ./Calendar

Calendar.o: Calendar.cpp Time.h Date.h
	# g++ -Werror -Wall -O0 -c Calendar.cpp
	# g++ -Werror -Wall -O3 -c Calendar.cpp
	# g++ -Werror -Wall -c Calendar.cpp
	# g++ -Wall -c Calendar.cpp
	g++ -Wall -Wextra -Werror -pedantic -c Calendar.cpp

Time.o: Time.cpp Time.h
	# g++ -Werror -Wall -O0 -c Time.cpp
	# g++ -Werror -Wall -O3 -c Time.cpp
	# g++ -Werror -Wall -c Time.cpp
	# g++ -Wall -c Time.cpp
	g++ -Wall -Wextra -Werror -pedantic -c Time.cpp

Date.o: Date.cpp Date.h
	# g++ -Werror -Wall -O0 -c Date.cpp
	# g++ -Werror -Wall -O3 -c Date.cpp
	# g++ -Werror -Wall -c Date.cpp
	# g++ -Wall -c Date.cpp
	g++ -Wall -Wextra -Werror -pedantic -c Date.cpp
	

clean:
	rm -rf *.o