FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

project-3: Prize.o Box.o project-3.o
	g++ $(FLAGS) Prize.o Box.o project-3.o -o project-3

project-3.o: pp3.cpp 
	g++ -c $(FLAGS) pp3.cpp -o project-3.o

Box.o: box.h box.cpp
	g++ -c $(FLAGS) box.cpp -o Box.o

Prize.o: prize.h prize.cpp
	g++ -c $(FLAGS) prize.cpp -o Prize.o

clean:
	rm -f *.o
	
cleanall: clean
	clean
	rm -f project
