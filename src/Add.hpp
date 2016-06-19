/**
 ************************************************************************************************************************
 *
 *  @file                   Add.hpp
 *  @brief                  Interface for the Addition functionality
 *  @date                   19/06/2016
 *
 *  @remark Author:         Raj Prajapati
 *
 *  @note                   N/A
 *
 ************************************************************************************************************************
 */

#ifndef ADD_HPP_
#define ADD_HPP_

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

/** @class Add
 *  @brief Class having method for Addition
 */
class Add
{
public:
	Add();
	virtual ~Add();
	float getAddition(const float &val1, const float &val2);
private:
};

#endif /* ADD_HPP_ */
