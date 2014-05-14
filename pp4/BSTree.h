//Declare and implement a class that provides the following interface EXACTLY.
#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>
#include "BSTNode.h"

using namespace std;

template <class T>
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

	    //calls private function find
	    bool find(T toFind)
	    {
	        return find(toFind, root);
	    }
	    
	    //calls private function get
	    BSTNode<T>* get(T toGet)
	    {
	        return get(toGet, root);
	    }
	    
	    //calls private function remove
	    bool remove (T toRemove)
	    {
	        return remove(toRemove, root);
	    }
	    
	    //calls private function insert(int, root)
    	bool insert (T datain)
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
        
        void reverseOrder ()
    	{
            reverseOrder(root);
        }
	
    private:

        //that points to the root node of a binary search tree
    	BSTNode<T>* root;
    	
    	//the number of nodes in the tree
    	unsigned int size; 
        
        //return true if data is found, else false on failure
        bool find(T toFind, BSTNode<T>* rooty)
        {
            if(rooty == NULL)
            {
                return false;
            }
            else if(rooty->getData() > toFind)
            {
                return find(toFind, rooty->getLeftChild());
            }
            else if(rooty->getData() < toFind)
            {
                return find(toFind, rooty->getRightChild());
            }
            else
                return true;
        }
        
        //return true on success or false on failure
	    bool remove (T toRemove, BSTNode<T>*& rootPtr)
	    {
            if (rootPtr == NULL)
            {
                return false;
            }
            else if (toRemove < rootPtr->getData())
            {
                return remove (toRemove, rootPtr->getLeftChild());
            }
            else if (toRemove > rootPtr->getData())
            {
                return remove (toRemove, rootPtr->getRightChild());
            }
            else
            {
                if(rootPtr->getLeftChild() == NULL)
                {
                    BSTNode<T>* oldPtr = rootPtr;
                    rootPtr = rootPtr->getRightChild();
                    delete oldPtr;
                }
                else
                {
                    removeMax(rootPtr->getData(), rootPtr->getLeftChild());
                }
                size--;
                return true;
            }
        }
        
        void removeMax (T& target, BSTNode<T>*& rootPtr)
        {
            if(rootPtr->getRightChild() == NULL)
            {
                BSTNode<T>* maxNode = rootPtr;
                target = rootPtr->getData();
                rootPtr = rootPtr->getLeftChild();
                delete maxNode;
            }
            else
            {
                removeMax(target, rootPtr->getLeftChild());
            }
        }
        
        // get data -- return a pointer to the data on success or NULL failure 
        BSTNode<T>* get(T toGet, BSTNode<T>* rooty)
        {
            if(rooty == NULL)
            {
                return NULL;
            }
            else if(rooty->getData() > toGet)
            {
                return get(toGet, rooty->getLeftChild());
            }
            else if(rooty->getData() < toGet)
            {
                return get(toGet, rooty->getRightChild());
            }
            else
                return rooty;
        }
        
        //create a new BSTNode and insert it into the tree, returns true; if integer is already in the true, does not insert, returns false
    	bool insert (T datain, BSTNode<T>*& rooty)
    	{
            if(rooty == NULL)
                {
                    rooty = new BSTNode<T>(datain);
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
                    return false;
                }
        }
	               
	    //clear the entire contents of the tree, freeing all memory associated with all nodes
    	void clear (BSTNode<T>*& rooty)
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
    	void inOrder (BSTNode<T>* rooty)
    	{
             if(rooty != NULL){
                inOrder(rooty->getLeftChild());
                cout << rooty->getData() << " ";
                inOrder(rooty->getRightChild());
            }
        }
        
        void reverseOrder (BSTNode<T>* rooty)
    	{
             if(rooty != NULL){
                reverseOrder(rooty->getRightChild());
                cout << rooty->getData() << " ";
                reverseOrder(rooty->getLeftChild());
            }
        }
};
