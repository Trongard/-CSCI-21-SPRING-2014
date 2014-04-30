FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pc-21: pc21.o
	g++ $(FLAGS) pc21.o -o pc-21

pc21.o: box.h pc21.cpp 
	g++ -c $(FLAGS) pc21.cpp -o pc21.o

clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
