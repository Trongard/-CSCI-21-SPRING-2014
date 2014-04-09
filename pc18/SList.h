#pragma once

#include"SLNode.h"

#include <cstdlib>
#include <sstream>
using namespace std;

class SLList
{

public:

	SLList();//sets values head(NULL) and size(0)
	virtual ~SLList();// calls the clear function
	
	void insertHead (int value);//create a new SLNode and attach as head of list
	void removeHead ();//remove the head node from the list
	
	void clear ();//clear the entire contents of the list, freeing all memory
	             //associated with all nodes
	
	unsigned int getSize () const;
	
	string toString () const;//return a string representation of the contents
	                         // of all nodes in the list, in the format
	                         // NUM1,NUM2,...,LASTNUM; return empty string on 
	                         // empty list
	                         
private:

	SLNode* head;
	unsigned int size;
	
};