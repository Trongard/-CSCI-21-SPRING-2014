FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pp-4: pp4.o Tword.o
	g++ $(FLAGS) pp4.o Tword.o -o pp-4

pp4.o: pp4.cpp BSTree.h BSTNode.h
	g++ -c $(FLAGS) pp4.cpp -o pp4.o
	
Tword.o: Tword.h Tword.cpp
	g++ -c $(FLAGS) Tword.cpp -o Tword.o
 
clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
