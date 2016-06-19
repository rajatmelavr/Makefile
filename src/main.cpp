/**
 ************************************************************************************************************************
 *
 *  @file                   main.cpp
 *  @brief                  Entry point of calculator
 *  @date                   19/06/2016
 *
 *  @remark Author:         Raj Prajapati
 *
 *  @note                   N/A
 *
 ************************************************************************************************************************
 */

/* Includes */
#include <iostream>
#include "Add.hpp"
#include "Divide.hpp"
#include "Multiply.hpp"
#include "Sub.hpp"


/*========================================================================*
 *  SECTION - External variables that cannot be defined in header files   *
 *========================================================================*
 */

/*========================================================================*
 *  SECTION - Local function prototypes                                   *
 *========================================================================*
 */

/*========================================================================*
 *  SECTION - Local variables                                             *
 *========================================================================*
 */

int main ()
{
	 /** ###Functional overview: */

	/** - Creating object of the class's */
	Add aObj;
	Multiply mObj;
	Divide dObj;
	Sub sObj;
	/** - Adding two values */
	std::cout << "Addition of two no is = " << aObj.getAddition(9,3) << std::endl;
	/** - Multiplying two values */
	std::cout << "Multiplication of two no is = " << mObj.getMultiply(20,3) << std::endl;
	/** - Dividing two values */
	std::cout << "Division of two no is = " << dObj.getDivision(21,3) << std::endl;
	/** - Subtracting two values */
	std::cout << "Subtraction of two no is = " << sObj.getSub(5,3) << std::endl;
	/** - Exiting the main program */
	return 0;
}
