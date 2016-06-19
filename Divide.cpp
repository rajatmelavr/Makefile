/*
 * divide.cpp
 *
 *  Created on: 19-Jun-2016
 *      Author: raj
 */

#include "Divide.hpp"

Divide::Divide() {
	// TODO Auto-generated constructor stub

}

Divide::~Divide() {
	// TODO Auto-generated destructor stub
}

float Divide::getDivision(const float& n, const float& d)
{
	if ( 0 != d)
	{
		return ( n/ d );
	}
	else
	{
		return 0;
	}
}
