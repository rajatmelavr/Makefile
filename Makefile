#This is first time make file

#Flags 
CXXFLAGS= -Wall -Wextra -Werror
#Compiler
CXX= g++

#Creation of Executable, Don not forget to give the dependencies 
calci: Add.hpp Multiply.hpp Divide.hpp Sub.hpp
	${CXX} ${CXXFLAGS} main.cpp Add.cpp Multiply.cpp Divide.cpp Sub.cpp -o calci
clean:
	rm -rf *.o calci