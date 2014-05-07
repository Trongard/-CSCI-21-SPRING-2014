//Declare and implement a class that provides the following interface EXACTLY.
#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;

class BSTree
{
    public:

        //sets values root(NULL) and size(0)
    	BSTree();
	
	    //calls the clear function
    	virtual ~BSTree();
	
	    //calls private function insert(int, root)
    	bool insert (int);
	
	    //call private function clear(root)
    	void clear ();
	
	    //
    	unsigned int getSize () const;
	
	    //call private function inOrder(root)
    	void inOrder ();
	
    private:

        //that points to the root node of a binary search tree
    	BSTNode* rooty; 
    	
    	//the number of nodes in the tree
    	unsigned int size; 

        //create a new BSTNode and insert it into the tree, returns true; if integer is already in the true, does not insert, returns false
    	bool insert (int, BSTNode*&);
	               
	    //clear the entire contents of the tree, freeing all memory associated with all nodes
    	void clear (BSTNode*&);
	               
	    //print the data in all nodes in the tree, in ascending order, separate by spaces (there should be a space after the last output value)
    	void inOrder (BSTNode*);
};
