FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pc-18: SList.o pc-18.o SLNode.o
	g++ $(FLAGS) SList.o pc-18.o SLNode.o -o pc-18

pc-18.o: pc18.cpp 
	g++ -c $(FLAGS) pc18.cpp -o pc-18.o

SList.o: SList.h SList.cpp 
	g++ -c $(FLAGS) SList.cpp -o SList.o
	
SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o

clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
