FLAGS = -Wall -Wextra -Werror -pedantic

project-2: Prize.o Box.o project-2.o
	g++ $(FLAGS) Prize.o Box.o project-2.o -o project-2

project-2.o: pp2.cpp 
	g++ -c $(FLAGS) pp2.cpp -o project-2.o

Box.o: box.h box.cpp
	g++ -c $(FLAGS) box.cpp -o Box.o

Prize.o: prize.h prize.cpp
	g++ -c $(FLAGS) prize.cpp -o Prize.o

clean:
	rm -f *.o
	
cleanall: clean
	clean
	rm -f project
