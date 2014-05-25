#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;

template<class T>
//a binary search tree node 
class BSTNode
{
    public:
        //default constructor
        BSTNode()
        :leftChild(NULL), rightChild(NULL), data(0)
        {
            
        }
        
        //overloaded constructor, sets values leftChild(NULL), rightChild(NULL), and data(newData)
    	BSTNode(T newData)
    	:leftChild(NULL), rightChild(NULL), data(newData)
    	{
    	    
    	}
    	
    	//destructor, sets leftChild and rightChild to NULL
    	virtual ~BSTNode()
    	{
    	    leftChild = NULL;
            rightChild = NULL;
    	}
    	
    	// set for data
    	void setData (T newData)
    	{
    	    data = newData;
    	}
    	
    	// get for data (return by value variant)
    	T getData () const
    	{
    	    return data;
    	}
    	
    	// get for data (return by reference variant)
    	T& getData ()
    	{
    	    return data;
    	}
    	
    	// set for leftChild
    	void setLeftChild (BSTNode* newLeftChild)
    	{
    	    leftChild = newLeftChild;
    	}
    	
    	// set for rightChild
    	void setRightChild (BSTNode* newRightChild)
    	{
    	    rightChild = newRightChild;
    	}
    	
    	// gets for leftChild (return by value variant)
    	BSTNode* getLeftChild () const
    	{
    	    return leftChild;
    	}
    	
    	// gets for leftChild (return by reference variant)
    	BSTNode*& getLeftChild ()
    	{
    	    return leftChild;
    	}
    	
    	// gets for rightChild (return by value variant)
    	BSTNode* getRightChild () const
    	{
    	    return rightChild;
    	}
    	
    	// gets for rightChild (return by reference variant)
    	BSTNode*& getRightChild ()
    	{
    	    return rightChild;
    	}
    
    private:
    
    	BSTNode* leftChild;// left child -- a pointer to another binary search tree node
    	BSTNode* rightChild;// right child -- a pointer to another binary search tree node
    	T data; // data -- a templated data type
};

