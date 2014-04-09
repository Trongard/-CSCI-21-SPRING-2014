#pragma once

#include"SLNode.h"

#include <cstdlib>
#include <sstream>
using namespace std;

class SLList
{

public:

	SLList();
	virtual ~SLList();
	
	void insertHead (int value);
	void removeHead ();
	
	void clear ();
	
	unsigned int getSize () const;
	
	string toString () const;
	                         
private:

	SLNode* head;
	unsigned int size;
	
};