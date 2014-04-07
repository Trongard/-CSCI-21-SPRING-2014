/*
 * CSCI 21 Programming Challenge #17
 * Beginning work on linked list data structures.
 *
 * Robert McAnulty
 * Date created: 07Apr14
 * Last date modified: 07Apr14
 *
 * SOURCES: challenge-17-spec.txt, challenge-17-unittest.cpp
 */
 
#include "SLNode.h"

#include <cassert>
#include <cstdlib>
#include <iostream>
using namespace std;

/* for unit testing -- do not alter */
template <typename X, typename A>
void btassert(A assertion);
void unittest ();

int main ()
{
	unittest();
	
	return 0;
}

/*
 * Unit testing functions. Do not alter.
 */

void unittest ()
{
	cout << "\nSTARTING UNIT TEST\n\n";
	
	SLNode node1;
	SLNode node2(1);
	
	try {
		btassert<bool>(node1.getContents() == 0);
		cout << "Passed TEST 1: default constructor (contents) \n";
	} catch (bool b) {
		cout << "# FAILED TEST 1: default constructor (contents) #\n";
	}
	
	try {
		btassert<bool>(node1.getNextNode() == NULL);
		cout << "Passed TEST 2: default constructor (nextNode) \n";
	} catch (bool b) {
		cout << "# FAILED TEST 2: default constructor (nextNode) #\n";
	}

	try {
		btassert<bool>(node2.getContents() == 1);
		cout << "Passed TEST 3: overloaded constructor (contents) \n";
	} catch (bool b) {
		cout << "# FAILED TEST 3: overloaded constructor (contents) #\n";
	}
	
	try {
		btassert<bool>(node2.getNextNode() == NULL);
		cout << "Passed TEST 4: overloaded constructor (nextNode) \n";
	} catch (bool b) {
		cout << "# FAILED TEST 4: overloaded constructor (nextNode) #\n";
	}
	
	SLNode* pNode = &node2;
	node1.setNextNode(&node2);
	
	try {
		btassert<bool>(node1.getNextNode() == pNode);
		cout << "Passed TEST 5: setNextNode/getNextNode \n";
	} catch (bool b) {
		cout << "# FAILED TEST 5: setNextNode/getNextNode #\n";
	}
	
	pNode = &node1;
	// node1 and node2 now connect each to the other -- not something you should
	// ever do outside of a testing situation
	node2.setNextNode(pNode);

	try {
		btassert<bool>(node2.getNextNode() == pNode);
		cout << "Passed TEST 6: setNextNode/getNextNode \n";
	} catch (bool b) {
		cout << "# FAILED TEST 6: setNextNode/getNextNode #\n";
	}
	
	node1.setNextNode(NULL);

	try {
		btassert<bool>(node1.getNextNode() == NULL);
		cout << "Passed TEST 7: setNextNode/getNextNode \n";
	} catch (bool b) {
		cout << "# FAILED TEST 7: setNextNode/getNextNode #\n";
	}
	
	node2.setNextNode(NULL);

	try {
		btassert<bool>(node2.getNextNode() == NULL);
		cout << "Passed TEST 8: setNextNode/getNextNode \n";
	} catch (bool b) {
		cout << "# FAILED TEST 8: setNextNode/getNextNode #\n";
	}
	
	cout << "\nUNIT TEST COMPLETE\n\n";
}

template <typename X, typename A>
void btassert (A assertion)
{
    if (!assertion)
		throw X();
}
