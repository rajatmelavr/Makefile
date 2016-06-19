/**
 ************************************************************************************************************************
 *
 *  @file                   Add.cpp
 *  @brief                  Having methods for Add.hpp
 *  @date                   19/06/2016
 *
 *  @remark Author:         Raj Prajapati
 *
 *  @note                   N/A
 *
 ************************************************************************************************************************
 */
/* Includes */
#include "Add.hpp"

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
 * @fn      Add::Add()
 *
 * @brief   Constructor for class Add
 *
 * @return  void
 *
 * @author  Raj Prajapati
 *
 * @note    N/A
 *
 ************************************************************************************************************************
 */
Add::Add()
{
    /** ###Functional overview: */

    /** - Constructor for class Add */
}

/**
 ************************************************************************************************************************
 *
 * @fn      Add::Add()
 *
 * @brief   Distructor for class Add
 *
 * @return  void
 *
 * @author  Raj Prajapati
 *
 * @note    N/A
 *
 ************************************************************************************************************************
 */
Add::~Add()
{
    /** ###Functional overview: */

    /** - Distructor for class Add */
}

/**
 ************************************************************************************************************************
 *
 * @fn      float Add::getAddition(const float& val1, const float& val2)
 *
 * @brief   Function to add two numbers
 *
 * @param   Values to be added
 *			- val1 = 1st value to be added
 *			- val2 = 2nd value to be added
 *
 * @return  Addition of val1 and val2
 *
 * @author  Raj Prajapati
 *
 * @note    N/A
 *
 ************************************************************************************************************************
 */
float Add::getAddition(const float& val1, const float& val2)
{
    /** ###Functional overview: */

    /** - Returning sum of val1 and val2 */
	return ( val1 + val2 );
}
