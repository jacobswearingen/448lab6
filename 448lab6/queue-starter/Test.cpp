/**
*	@file Test.cpp
*	@author Jacob Swearingen
*	@date 2019.11.11
*/
#include "Test.h"

Test::Test(){}


Test::~Test(){}

bool Test::testConstructor(){
	printf("Testing Constructor: \n");
	bool allGood = true;
	printf("Test %d: new (empty) queue can't be peeked: ", testnum);
	testnum++;

	Queue q;
	bool threwError = false;
	try{
		q.peekFront();
	}
	catch(...){
		threwError = true;
	}
	allGood = allGood&&threwError;
	(threwError) ? printf("Pass\n") : printf ("Fail\n");

	printf("Test %d: new (empty) queue can't be dequeued: ", testnum);
	testnum++;

	threwError = false;
	try{

		q.dequeue();
	}
	catch(...){
		threwError = true;
	}
	allGood = allGood&&threwError;
	(threwError) ? printf("Pass\n") : printf ("Fail\n");

	return allGood;
}






bool Test::testisEmpty(){
	printf("Testing isEmpty(): \n");
	bool allGood = true;
	printf("Test %d: empty queue returns true: ", testnum);
	testnum++;

	Queue q;
	allGood = allGood && q.isEmpty();
	(q.isEmpty()) ? printf("Pass\n") : printf ("Fail\n");
	printf("Test %d: non-empty queue returns false: ", testnum);
	testnum++;

	q.enqueue(5);
	(q.isEmpty()) ? printf("Fail\n") : printf ("Pass\n");
	allGood = allGood && !q.isEmpty();

	return allGood;
}

bool Test::testpeekFront(){
	printf("Testing peekFront(): \n");
	bool allGood = true;


	printf("Test %d: peekFront on empty queue throws error: ", testnum);
	testnum++;
	Queue q;
	bool threwError = false;
	try{
		q.peekFront();
	}
	catch(...){
		threwError = true;
	}
	(threwError) ? printf("Pass\n") : printf ("Fail\n");
	allGood = allGood && threwError;


	printf("Test %d: peekFront returns the value at the front: ", testnum);
	testnum++;

	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);

	(q.peekFront() == 5) ? printf("Pass\n") : printf ("Fail\n");
//	printf("peek returns %d; it should be 5.\n", q.peekFront());
	allGood = allGood && (q.peekFront() == 5);

		return allGood;
}

bool Test::testenqueue(){
	printf("Testing enqueue(): \n");
	bool allGood = true;
	printf("Test %d: enqueuing to empty queue works: ", testnum);
	testnum++;

	Queue q;
	q.enqueue(5);
	(!q.isEmpty()) ? printf("Pass\n") : printf ("Fail\n");
	allGood = allGood && !q.isEmpty();
	printf("Test %d: enqueued nodes are added to back: ", testnum);
	testnum++;

	q.enqueue(6);

	(q.peekFront() == 5) ? printf("Pass\n") : printf ("Fail\n");
	allGood = allGood && (q.peekFront() == 5);

	return allGood;
}

bool Test::testdequeue(){
	bool allGood = true;
	printf("Test %d: dequeue on empty queue throws error: ", testnum);
	testnum++;

	Queue q;
	bool threwError = false;
	try{
		q.dequeue();
	}
	catch(...){
		threwError = true;
	}
		(threwError) ? printf("Pass\n") : printf ("Fail\n");
		allGood = allGood && threwError;

		printf("enqueuing %d\n", 5);
		q.enqueue(5);
		printf("peekFront says the \"front\" is is %d\n", q.peekFront());

		printf("enqueuing %d\n", 6);
		q.enqueue(6);
		printf("peekFront says the \"front\" is is %d\n", q.peekFront());


		printf("enqueuing %d\n", 7);
		q.enqueue(7);
		printf("peekFront says the \"front\" is is %d\n", q.peekFront());

		printf("dequeuing\n");
		q.dequeue();
		printf("peekFront says the \"front\" is is %d\n", q.peekFront());

		printf("dequeuing\n");
		q.dequeue();
		printf("peekFront says the \"front\" is is %d\n", q.peekFront());

		printf("enqueuing %d\n", 4);
		q.enqueue(4);
		printf("peekFront says the \"front\" is is %d\n", q.peekFront());


		printf("dequeuing\n");
		q.dequeue();
		printf("enqueuing %d\n", 3);
		q.enqueue(3);
		printf("peekFront says the \"front\" is is %d\n", q.peekFront());

		printf("dequeuing\n");
		q.dequeue();
		printf("peekFront says the \"front\" is is %d\n", q.peekFront());


		printf("dequeuing\n");
		q.dequeue();
	//	printf("peekFront says the \"front\" is is %d\n", q.peekFront());

	printf("Test %d: dequeuing actually dequeues a node: ", testnum);
	testnum++;


		(q.isEmpty()) ? printf("Pass\n") : printf ("Fail\n");
		allGood = allGood && q.isEmpty();

//		printf("peekFront says the \"front\" is is %d\n", q.peekFront());
	//	allGood = allGood && (q.peekFront() == 5);

		return allGood;
}
