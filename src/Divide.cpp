/**
 ************************************************************************************************************************
 *
 *  @file                   Divide.cpp
 *  @brief                  Having methods for Divide.hpp
 *  @date                   19/06/2016
 *
 *  @remark Author:         Raj Prajapati
 *
 *  @note                   N/A
 *
 ************************************************************************************************************************
 */

/* Includes */
#include "Divide.hpp"


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

/**
 ************************************************************************************************************************
 *
 * @fn      Divide::Divide()
 *
 * @brief   Constructor for class Divide
 *
 * @return  void
 *
 * @author  Raj Prajapati
 *
 * @note    N/A
 *
 ************************************************************************************************************************
 */
Divide::Divide()
{
    /** ###Functional overview: */

    /** - Constructor for class Divide */
}

/**
 ************************************************************************************************************************
 *
 * @fn      Divide::Divide()
 *
 * @brief   Distructor for class Divide
 *
 * @return  void
 *
 * @author  Raj Prajapati
 *
 * @note    N/A
 *
 ************************************************************************************************************************
 */
Divide::~Divide()
{
    /** ###Functional overview: */

    /** - Distructor for class Divide */
}

/**
 ************************************************************************************************************************
 *
 * @fn      float Divide::getDivision(const float& val1, const float& val2)
 *
 * @brief   Function to divide two numbers
 *
 * @param   Values to be divided
 *			- val1 = 1st value
 *			- val2 = 2nd value
 *
 * @return  Division of val1 and val2
 *
 * @author  Raj Prajapati
 *
 * @note    N/A
 *
 ************************************************************************************************************************
 */
float Divide::getDivision(const float& val1, const float& val2)
{
    /** ###Functional overview: */

    /** - Returning division of val1 (numerator) and val2 (denominator) */
	if ( 0 != val2 )
	{
		return ( val1 / val2 );
	}
	else
	{
		return 0;
	}
}
