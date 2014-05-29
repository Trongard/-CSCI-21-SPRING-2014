FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

project-2: prize.o box.o project-2.o CinReader.o
	g++ $(FLAGS) prize.o box.o project-2.o CinReader.o -o project-2

project-2.o: pp2.cpp 
	g++ -c $(FLAGS) pp2.cpp -o project-2.o

prize.o: prize.h prize.cpp 
	g++ -c $(FLAGS) prize.cpp -o prize.o
	
box.o: box.h box.cpp
	g++ -c $(FLAGS) box.cpp -o box.o

CinReader.o: CinReader.h CinReader.cpp
	g++ -c $(FLAGS) CinReader.cpp -o CinReader.o
	
clean:
	rm -f *.o
	
cleanall: clean
	clean
	rm -f project
