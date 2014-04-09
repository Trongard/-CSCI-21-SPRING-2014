FLAGS = -Wall -Wextra -Werror -pedantic

pc-18: SList.o pc-18.o
	g++ $(FLAGS) SList.o pc-18.o -o pc-18

pc-18.o: pc18.cpp 
	g++ -c $(FLAGS) pc18.cpp -o pc-18.o

SLNode.o: SList.h SList.cpp
	g++ -c $(FLAGS) SList.cpp -o SList.o

clean:
	rm -f *.o
	
cleanall: clean
	clean
	rm -f project
