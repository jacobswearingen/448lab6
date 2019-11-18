/**
*	@file Test.h
*	@author Jacob Swearingen
*	@date 2019.11.11
*/

#ifndef TEST_H
#define TEST_H

#include "Queue.h"


class Test
{
	public:

	Test();

	~Test();

	bool testConstructor();

	bool testisEmpty();

	bool testenqueue();

	bool testdequeue();

	bool testpeekFront();

	int testnum = 1;
};

#endif
