# Makefile for Calculator
# Author: Raj Prajapati
#------------------------------------------------
#Description : 1. This Makefile is creating the objects with just two lines of code
#			      and after that its creating the executable using special macro
#			   2. Breaked line (using "\") for objects

OBJ=\
	main.o\
	Add.o\
	Multiply.o\
	Divide.o\
	Sub.o\

#implicit rulefor the construction of .o (object) files out of .cpp (source files).
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

#Creation of Executable, Don not forget to give the dependencies 
calci:${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o $@
clean:
	rm -rf *.o calci
