/**
 ************************************************************************************************************************
 *
 *  @file                   Multiply.cpp
 *  @brief                  Having methods for Multiply.hpp
 *  @date                   19/06/2016
 *
 *  @remark Author:         Raj Prajapati
 *
 *  @note                   N/A
 *
 ************************************************************************************************************************
 */

/* Includes */
#include "Multiply.hpp"


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
 * @fn      Multiply::Multiply()
 *
 * @brief   Constructor for class Multiply
 *
 * @return  void
 *
 * @author  Raj Prajapati
 *
 * @note    N/A
 *
 ************************************************************************************************************************
 */
Multiply::Multiply()
{
    /** ###Functional overview: */

    /** - Constructor for class Multiply */

}

/**
 ************************************************************************************************************************
 *
 * @fn      Multiply::Multiply()
 *
 * @brief   Distructor for class Multiply
 *
 * @return  void
 *
 * @author  Raj Prajapati
 *
 * @note    N/A
 *
 ************************************************************************************************************************
 */
Multiply::~Multiply()
{
    /** ###Functional overview: */

    /** - Distructor for class Multiply */
}

/**
 ************************************************************************************************************************
 *
 * @fn      float Multiply::getMultiply(const float& val1, const float& val2)
 *
 * @brief   Function to multiply two numbers
 *
 * @param   Values to be multiply
 *			- val1 = 1st value
 *			- val2 = 2nd value
 *
 * @return  Multiplication of val1 and val2
 *
 * @author  Raj Prajapati
 *
 * @note    N/A
 *
 ************************************************************************************************************************
 */
float Multiply::getMultiply(const float& val1, const float& val2)
{
	/** ###Functional overview: */

    /** - Returning multiplication of val1 and val2 */
	return ( val1 * val2 );
}
