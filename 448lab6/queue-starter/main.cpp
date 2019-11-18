/**
*	@file main.cpp
*	@author Jacob Swearingen
*	@date 2019.11.18
*/

#include <iostream>
#include <stdexcept>
#include "Test.h"

int main()
{
//	Queue q;
	Test test;
	(test.testConstructor()) ? printf("constructor works!\n") : printf("constructor doesn't work!\n");
	printf("\n");
	(test.testisEmpty()) ? printf("isEmpty works!\n") : printf("isEmpty doesn't work!\n");
	printf("\n");

	(test.testpeekFront()) ? printf("peekFront works!\n") : printf("peekFront doesn't work!\n");
	printf("\n");

	(test.testenqueue()) ? printf("enqueue works!\n") : printf("enqueue doesn't work!\n");
	printf("\n");

	(test.testdequeue()) ? printf("dequeue works!\n") : printf("dequeue doesn't work!\n");
	printf("\n");

	return(0);
}
