FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pc-29: pc29.o treasure.o 
	g++ $(FLAGS) pc29.o treasure.o -o pc-29

pc29.o: pc29.cpp 
	g++ -c $(FLAGS) pc29.cpp -o pc29.o
	
treasure.o: treasure.h treasure.cpp
	g++ -c $(FLAGS) treasure.cpp -o treasure.o

clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
