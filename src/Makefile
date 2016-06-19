# Makefile for Calculator
# Author: Raj Prajapati
# Date : 20/06/2016
#------------------------------------------------
#Description : 1. This Makefile is creating the objects with just two lines of code
#			      and after that its creating the executable using special macro
#			   2. Breaked line (using "\") for objects
#			   3. Added Library Path , Library and Include Path

OBJ=\
	main.o\
	Add.o\
	Multiply.o\
	Divide.o\
	Sub.o\

#include Files
INCLUDES= -I.

#Library Paths
LIB_PATH= -L.

#include
LIB= -lm

#implicit rulefor the construction of .o (object) files out of .cpp (source files).
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

#Creation of Executable, Don not forget to give the dependencies 
calci:${OBJ}
	${CXX} ${CXXFLAGS} ${INCLUDES} ${LIB_PATH} ${OBJ} -o $@ ${LIBS}

#cleaning the objects and executable
clean:
	rm -rf *.o calci
