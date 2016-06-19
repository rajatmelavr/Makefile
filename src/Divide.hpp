/**
 ************************************************************************************************************************
 *
 *  @file                   Divide.hpp
 *  @brief                  Interface for the Division functionality
 *  @date                   19/06/2016
 *
 *  @remark Author:         Raj Prajapati
 *
 *  @note                   N/A
 *
 ************************************************************************************************************************
 */

#ifndef DIVIDE_HPP_
#define DIVIDE_HPP_

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

/** @class Divide
 *  @brief Class having method for Division
 */
class Divide
{
public:
	Divide();
	virtual ~Divide();
	float getDivision(const float& val1, const float& val2);
};

#endif /* DIVIDE_HPP_ */
