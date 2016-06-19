/**
 ************************************************************************************************************************
 *
 *  @file                   Multiply.hpp
 *  @brief                  Interface for the Multiplication functionality
 *  @date                   19/06/2016
 *
 *  @remark Author:         Raj Prajapati
 *
 *  @note                   N/A
 *
 ************************************************************************************************************************
 */

#ifndef MULTIPLY_HPP_
#define MULTIPLY_HPP_

/*========================================================================*
 *  SECTION - Global definitions
 *========================================================================*
 */


/*========================================================================*
 *  SECTION - extern global variables (minimize global variable use)      *
 *========================================================================*
 */


/*========================================================================*
 *  SECTION - extern global functions                                     *
 *========================================================================*
 */

/** @class Multiply
 *  @brief Class having method for Multiplication
 */
class Multiply
{
public:
	Multiply();
	virtual ~Multiply();
	float getMultiply(const float& val1, const float& val2);
};

#endif /* MULTIPLY_HPP_ */
