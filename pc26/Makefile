FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pc-26: BSTreet.o pc-26.o BSTNode.o
	g++ $(FLAGS) BSTree.o pc-26.o BSTNode.o -o pc-26

pc-26.o: pc26.cpp 
	g++ -c $(FLAGS) pc26.cpp -o pc-26.o

BSTree.o: BSTree.h BSTree.cpp 
	g++ -c $(FLAGS) BSTree.cpp -o BSTree.o
	
BSTNode.o: BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) BSTNode.cpp -o BSTNode.o

clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
