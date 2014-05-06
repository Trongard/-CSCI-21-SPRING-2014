FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pp-4: pp4.o BSTNode.o 
	g++ $(FLAGS) pp4.o BSTNode.o -o pp-4

pp4.o: pp4.cpp 
	g++ -c $(FLAGS) pp4.cpp -o pp4.o
	
# BSTNode.o: BSTNode.h BSTNode.cpp
# 	g++ -c $(FLAGS) BSTNode.cpp -o BSTNode.o

clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
