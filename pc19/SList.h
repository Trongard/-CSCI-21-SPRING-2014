#pragma once

#include"SLNode.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;

class SList
{
public:

	SList();// sets values head(NULL) and size(0)
	
	virtual ~SList();// calls the clear function
	
	void insertHead (int);// create a new SLNode and attach as head of list
	void insertTail (int);// create a new SLNode and attach at the end of list
	
	void removeHead (); //remove the head node from the list
	void removeTail (); //remove the tail node from the list
	
	void clear (); //clear the entire contents of the list, freeing all memory
	               //associated with all nodes
	
	unsigned int getSize () const;
	
	string toString () const; //return a string representation of the contents
	                          //of all nodes in the list, in the format
	                          //NUM1,NUM2,...,LASTNUM; return empty string on 
	                          //empty list
	                          
private:

	SLNode* head;// that points to the first node in a singly-linked list
	unsigned int size;// the count of the number of nodes in the list
};