/**
 ************************************************************************************************************************
 *
 *  @file                   Sub.hpp
 *  @brief                  Interface for the Subtraction functionality
 *  @date                   19/06/2016
 *
 *  @remark Author:         Raj Prajapati
 *
 *  @note                   N/A
 *
 ************************************************************************************************************************
 */

#ifndef SUB_HPP_
#define SUB_HPP_

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

/** @class Sub
 *  @brief Class having method for Subtraction
 */
class Sub
{
public:
	Sub();
	virtual ~Sub();
	float getSub(const float& val1, const float& val2);
};

#endif /* SUB_HPP_ */
