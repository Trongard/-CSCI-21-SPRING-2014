//Declare and implement a class that provides the following interface EXACTLY.
#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>
#include "BSTNode.h"

using namespace std;

//template T<>;
class BSTree
{
    public:

        //sets values root(NULL) and size(0)
    	BSTree()
    	:root(NULL), size(0)
        {
            
        }
	
	    //calls the clear function
    	virtual ~BSTree()
    	{
            clear();
        }

	
	    //calls private function insert(int, root)
    	bool insert (int)
    	{
            return insert(datain, root);
        }
	
	    //call private function clear(root)
    	void clear ()
    	{
            clear(root);
        }
	
	    //
    	unsigned int getSize () const
    	{
            return size;
        }
	
	    //call private function inOrder(root)
    	void inOrder ()
    	{
            inOrder(root);
        }
	
    private:

        //that points to the root node of a binary search tree
    	BSTNode* root; 
    	
    	//the number of nodes in the tree
    	unsigned int size; 

        //create a new BSTNode and insert it into the tree, returns true; if integer is already in the true, does not insert, returns false
    	bool insert (int, BSTNode*&)
    	{
            if(rooty == NULL)
                {
                    rooty = new BSTNode(datain);
                    size++;
                    return true;
                }
            else if(datain < rooty->getData())
                {
                    return insert(datain,rooty->getLeftChild());
                }
            else if(datain > rooty->getData())
                {
                    return insert(datain,rooty->getRightChild());
                }
            else
                {
                    //cout << "Failed to enter! -- DUPLICATE!" << endl;
                    return false;
                }
        }
	               
	    //clear the entire contents of the tree, freeing all memory associated with all nodes
    	void clear (BSTNode*&)
    	{
            if(rooty != NULL)
            {
                clear(rooty->getLeftChild());
                clear(rooty->getRightChild());
                delete rooty;
                rooty = NULL;
                size--;
            }
        }
	               
	    //print the data in all nodes in the tree, in ascending order, separate by spaces (there should be a space after the last output value)
    	void inOrder (BSTNode*)
    	{
             if(rooty != NULL){
                inOrder(rooty->getLeftChild());
                cout << rooty->getData() << " ";
                inOrder(rooty->getRightChild());
            }
        }
};
