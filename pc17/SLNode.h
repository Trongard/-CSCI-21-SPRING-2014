#pragma once

#include <cstdlib>
using namespace std;

//
// Grader comments 2014.04.09
// Need comments to document the functions here
//
class SLNode
{
    public:
    
    	SLNode();
    	SLNode(int newContents);
    	
    	virtual ~SLNode();
    	
    	void setContents (int newContents);
    	void setNextNode (SLNode* newNextNode);
    	
    	int getContents () const;
    	SLNode* getNextNode () const;
    	
    private:
    
    	SLNode* nextNode;
    	int contents;
};