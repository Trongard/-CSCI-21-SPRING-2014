FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pc-17: SLNode.o pc-17.o
	g++ $(FLAGS) SLNode.o pc-17.o -o pc-17

pc-17.o: pc17.cpp 
	g++ -c $(FLAGS) pc17.cpp -o pc-17.o

SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o

clean:
	rm -f *.o
	
cleanall: clean
	clean
	rm -f project
