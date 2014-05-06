FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pc-25: pc25.o BSTNode.o 
	g++ $(FLAGS) pc25.o BSTNode.o -o pc-25

pc25.o: pc25.cpp 
	g++ -c $(FLAGS) pc25.cpp -o pc25.o
	
BSTNode.o: BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) BSTNode.cpp -o BSTNode.o

clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
