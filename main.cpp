#include <iostream>
#include "Add.hpp"
#include "Divide.hpp"
#include "Multiply.hpp"
#include "Sub.hpp"

int main ()
{
	Add aObj;
	Multiply mObj;
	Divide dObj;
	Sub sObj;
	std::cout << "Addition of two no is = " << aObj.getAddition(9,3) << std::endl;
	std::cout << "Multiplication of two no is = " << mObj.getMultiply(20,3) << std::endl;
	std::cout << "Division of two no is = " << dObj.getDivision(21,3) << std::endl;
	std::cout << "Subtraction of two no is = " << sObj.getSub(5,3) << std::endl;
	return 0;
}
