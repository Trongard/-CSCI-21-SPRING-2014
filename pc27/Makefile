FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pc-27: BSTree.o pc-27.o BSTNode.o
	g++ $(FLAGS) BSTree.o pc-27.o BSTNode.o -o pc-27

pc-27.o: pc27.cpp 
	g++ -c $(FLAGS) pc27.cpp -o pc-27.o

BSTree.o: BSTree.h BSTree.cpp 
	g++ -c $(FLAGS) BSTree.cpp -o BSTree.o
	
BSTNode.o: BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) BSTNode.cpp -o BSTNode.o

clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
