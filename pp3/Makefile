##
## Grader comments 2014.05.15
## cleanall option doesn't work
## -10 points
##
FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

project-3: DLList.o DLNode.o project-3.o
	g++ $(FLAGS) DLList.o DLNode.o project-3.o -o project-3

project-3.o: pp3.cpp 
	g++ -c $(FLAGS) pp3.cpp -o project-3.o

DLList.o: DLList.h DLList.cpp 
	g++ -c $(FLAGS) DLList.cpp -o DLList.o
	
DLNode.o: DLNode.h DLNode.cpp
	g++ -c $(FLAGS) DLNode.cpp -o DLNode.o

clean:
	rm -f *.o
	
cleanall: clean
	clean
	rm -f project
