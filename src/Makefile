# Makefile for Calculator
# Author: Raj Prajapati
#------------------------------------------------
#Description : This Makefile is creating the individual objects and after that
#				its creating the executable

#Creation of object files
Add.o:Add.cpp Add.hpp
	${CXX} ${CXXFLAGS} -c Add.cpp

#Creation of object files
Multiply.o:Multiply.cpp Multiply.hpp
	${CXX} ${CXXFLAGS} -c Multiply.cpp

#Creation of object files
Sub.o:Sub.cpp Sub.hpp
	${CXX} ${CXXFLAGS} -c Sub.cpp

#Creation of object files
Divide.o:Divide.cpp Divide.hpp
	${CXX} ${CXXFLAGS} -c Divide.cpp

#Creation of object files
main.o:Add.hpp Multiply.hpp Sub.hpp Divide.hpp
	${CXX} ${CXXFLAGS} -c main.cpp

#Creation of Executable, Don not forget to give the dependencies 
calci:main.o Add.o Multiply.o Divide.o Sub.o
	${CXX} ${CXXFLAGS} main.o Add.o Multiply.o Divide.o Sub.o -o calci
clean:
	rm -rf *.o calci
