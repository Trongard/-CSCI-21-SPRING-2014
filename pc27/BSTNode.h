#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;

class BSTNode
{
    public:
    
    	BSTNode();//default constructor, sets values leftChild(NULL), rightChild(NULL), and data(0)
    	BSTNode(int newData);//overloaded constructor, int parameter assigned to data
    	
    	virtual ~BSTNode();//destructor, sets leftChild and rightChild to NULL
    	
    	void setData (int);
    	
    	int getData () const;
    	int& getData ();
    	
    	void setLeftChild (BSTNode*);
    	void setRightChild (BSTNode*);
    	
    	BSTNode* getLeftChild () const;
    	BSTNode*& getLeftChild ();
    	
    	BSTNode* getRightChild () const;
    	BSTNode*& getRightChild ();
    
    private:
    
    	BSTNode* leftChild;
    	BSTNode* rightChild;
    	int data; //used to store the data of this BSTNode
};
