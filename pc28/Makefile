FLAGS = -Wall -Wextra -Werror -pedantic -Wno-newline-eof

pc-28: item.o fooditem.o magicitem.o pc-28.o
	g++ $(FLAGS) item.o pc-28.o -o pc-28

pc-28.o: pc28.cpp 
	g++ -c $(FLAGS) pc28.cpp -o pc-28.o

item.o: item.h item.cpp 
	g++ -c $(FLAGS) item.cpp -o item.o

fooditem.o: fooditem.h fooditem.cpp 
	g++ -c $(FLAGS) fooditem.cpp -o fooditem.o

magicitem.o: magicitem.h magicitem.cpp 
	g++ -c $(FLAGS) magicitem.cpp -o magicitem.o

clean:
	rm -f *.o
	
cleanall: clean
	rm -f project
