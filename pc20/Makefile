FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pc-20: SList.o pc-20.o SLNode.o
	g++ $(FLAGS) SList.o pc-20.o SLNode.o -o pc-20

pc-20.o: pc20.cpp 
	g++ -c $(FLAGS) pc20.cpp -o pc-20.o

SList.o: SList.h SList.cpp 
	g++ -c $(FLAGS) SList.cpp -o SList.o
	
SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o

clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
