//Declare and implement a class that provides the following interface EXACTLY.
#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>
#include "BSTNode.h"

using namespace std;

class BSTree
{
    public:

    	BSTree(); //sets values root(NULL) and size(0)
    	
    	virtual ~BSTree(); //calls the clear function
    	
    	bool insert (int); //calls private function insert(int, root)
    	
    	bool remove (int); //return value returned by private function remove(int, root)

    	void clear (); //call private function clear(root)
    	
    	unsigned int getSize () const;
    	
    	void inOrder (); //call private function inOrder(root)
    	
    private:
    
    	BSTNode* root;  //that points to the root node of a binary search tree
    	unsigned int size; //the number of nodes in the tree
    
    
    	bool insert (int, BSTNode*&); //create a new BSTNode and insert it into the tree, returns 
    	               //true; if integer is already in the true, does not insert, returns false
    	
    	bool remove (int, BSTNode*&); //traverse the tree and remove the node containing the target 
    	               //integer if present, return true; return false if target integer is not in tree
    	
    	void removeMax (int&, BSTNode*&); //helper function for private remove
    	
    	void clear (BSTNode*&); //clear the entire contents of the tree, freeing all memory
    	               //associated with all nodes
    	
    	void inOrder (BSTNode*); //print the data in all nodes in the tree, in ascending order, 
    	               //separate by spaces (there should be a space after the last output 
                      //value)
};
