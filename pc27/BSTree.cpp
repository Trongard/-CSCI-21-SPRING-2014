#include "BSTree.h"

BSTree()
{
    }//sets values root(NULL) and size(0)

virtual ~BSTree()
{
    
}//calls the clear function

bool insert (int)
{
    
}//calls private function insert(int, root)

bool remove (int)
{
    
}//return value returned by private function remove(int, root)

void clear ()
{
    
}//call private function clear(root)

unsigned int getSize () const
{
    
}

void inOrder ()
{
    
}//call private function inOrder(root)

bool insert (int, BSTNode*&)
{
    
}//create a new BSTNode and insert it into the tree, returns 
               //true; if integer is already in the true, does not insert, returns false

bool remove (BSTNode*& rootPtr, const int& data){
    if (rootPtr == NULL){
        return false;
    }
    else if (data < getContents()){
        return remove (rootPtr->getLeftChild(), data);
    }
    else if (data > getContents()){
        return remove (rootPtr->getRightChild(), data);
    }
    else{
        if(rootPtr->getLeftChild() == NULL){
            BSTNode* oldPtr = rootPtr;
            rootPtr = rootPtr->getRightChild();
            delete oldPtr;
        }
        else{
            removeMax(rootPtr->getLeftChild(), rootptr->getContents());
        }
        size--;
        return true;
    }
}//traverse the tree and remove the node containing the target 
               //integer if present, return true; return false if target integer is not in tree

void removeMax (BSTNode*& rootPtr, int& removed){
    if(rootPtr->getRightChild() == NULL){
        BSTNode* maxNode = rootPtr;
        removed = rootPtr->getContents();
        rootPtr = rootPtr->getLeftChild();
        delete maxNode;
    }
    else{
        removeMax(rootPtr->getLeftChild(), removed);
    }
}//helper function for private remove

void clear (BSTNode*&)
{
    
}//clear the entire contents of the tree, freeing all memory
               //associated with all nodes

void inOrder (BSTNode*)
{
    
}//print the data in all nodes in the tree, in ascending order, 
               //separate by spaces (there should be a space after the last output 
              //value)
                      


