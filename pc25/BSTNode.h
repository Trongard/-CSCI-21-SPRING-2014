#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>

class BSTNode
{
    public:
    
    	BSTNode();//default constructor, sets values leftChild(NULL), rightChild(NULL), and contents(0)
    	BSTNode(int contents);//overloaded constructor, int parameter assigned to contents
    	
    	virtual ~BSTNode();//destructor, sets leftChild and rightChild to NULL
    	
    	void setContents (int);
    	
    	int getContents () const;
    	int& getContents ();
    	
    	void setLeftChild (BSTNode*);
    	void setRightChild (BSTNode*);
    	
    	BSTNode* getLeftChild () const;
    	BSTNode*& getLeftChild ();
    	
    	BSTNode* getRightChild () const;
    	BSTNode*& getRightChild ();
    
    private:
    
    	BSTNode* leftChild;
    	BSTNode* rightChild;
    	int contents; //used to store the data contents of this BSTNode
};
