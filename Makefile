#
# You need to add the flags into your compiles.
# Your code for pc6 doesn't compile with the flags turned on.
# I have to give you a zero. Sorry. --Rob
#
# This makefile doesn't have the warnings-as-errors flags
# turned on. I can't use it for building your projects.
#
# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Robert McAnulty
#

FLAGS = -Wall -pedantic -Wextra -Werror

# Target for programming challenge 1
# Date completed: 2-3-2014
pc1: pc1.cpp
	g++ $(FLAGS) -o pc1 pc1.cpp
	
# Target for programming challenge 2
# Date completed: 2-3-2014
pc2: pc2.cpp
	g++ $(FLAGS) -o pc2 pc2.cpp
	
# Target for programming challenge 3
# Date completed: 2-3-2014
pc3: pc3.cpp
	g++ $(FLAGS) -o pc3 pc3.cpp
	
# Target for programming challenge 4
# Date completed: 2-5-2014
pc4: pc4.cpp
	g++ $(FLAGS) -o pc4 pc4.cpp
	
# Target for programming challenge 5
# Date completed: 2-10-2014
pc5: pc5.cpp
	g++ $(FLAGS) -o pc5 pc5.cpp
	
# Target for programming challenge 6
# Date completed: 2-12-2014
pc6: pc6.cpp
	g++ $(FLAGS) -o pc6 pc6.cpp
	
# Target for programming challenge 7
# Date completed: 2-19-2014
pc7: pc7.cpp
	g++ $(FLAGS) -o pc7 pc7.cpp
	
# Target for programming project 1
# Date completed: 2-19-2014
pp1: pp1.cpp
	g++ $(FLAGS) -o pp1 pp1.cpp

# Target for programming challenge 8
# Date completed: 2-24-2014
pc8: pc8.cpp
	g++ $(FLAGS) -o pc8 pc8.cpp

# Target for programming challenge 9
# Date completed: 2-26-2014
pc9: pc9.cpp
	g++ $(FLAGS) -o pc9 pc9.cpp
