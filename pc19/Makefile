FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pc-19: SList.o pc-19.o SLNode.o
	g++ $(FLAGS) SList.o pc-19.o SLNode.o -o pc-19

pc-19.o: pc19.cpp 
	g++ -c $(FLAGS) pc19.cpp -o pc-19.o

SList.o: SList.h SList.cpp 
	g++ -c $(FLAGS) SList.cpp -o SList.o
	
SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o

clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
