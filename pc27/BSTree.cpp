#include "BSTree.h"

BSTree::BSTree()
:root(NULL), size(0)
{
    
}//sets values root(NULL) and size(0)

BSTree::~BSTree()
{
    clear();
}//calls the clear function

bool BSTree::insert (int datain)
{
    return insert(datain, root);
}//calls private function insert(int, root)

bool BSTree::remove (int toRemove)
{
    return remove(toRemove, root);
}//return value returned by private function remove(int, root)

void BSTree::clear ()
{
    clear(root);
}//call private function clear(root)

unsigned int BSTree::getSize () const
{
    return size;
}

void BSTree::inOrder ()
{
    inOrder(root);
}//call private function inOrder(root)

bool BSTree::insert (int datain, BSTNode*& rooty)
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
            return false;
        }
}//create a new BSTNode and insert it into the tree, returns true; if integer is already in the true, does not insert, returns false

bool BSTree::remove (int toRemove, BSTNode*& rootPtr){
    if (rootPtr == NULL){
        return false;
    }
    else if (toRemove < rootPtr->getData()){
        return remove (toRemove, rootPtr->getLeftChild());
    }
    else if (toRemove > rootPtr->getData()){
        return remove (toRemove, rootPtr->getRightChild());
    }
    else{
        if(rootPtr->getLeftChild() == NULL){
            BSTNode* oldPtr = rootPtr;
            rootPtr = rootPtr->getRightChild();
            delete oldPtr;
        }
        else{
            removeMax(rootPtr->getData(), rootPtr->getLeftChild());
        }
        size--;
        return true;
    }
}//traverse the tree and remove the node containing the target integer if present, return true; return false if target integer is not in tree

void BSTree::removeMax (int& removed, BSTNode*& rootPtr){
    if(rootPtr->getRightChild() == NULL){
        BSTNode* maxNode = rootPtr;
        removed = rootPtr->getData();
        rootPtr = rootPtr->getLeftChild();
        delete maxNode;
    }
    else{
        removeMax(removed, rootPtr->getLeftChild());
    }
}//helper function for private remove

void BSTree::clear (BSTNode*& rooty)
{
    if(rooty != NULL)
    {
        clear(rooty->getLeftChild());
        clear(rooty->getRightChild());
        delete rooty;
        rooty = NULL;
        size--;
    }
}//clear the entire contents of the tree, freeing all memory associated with all nodes

void BSTree::inOrder (BSTNode* rooty)
{
    if(rooty != NULL){
        inOrder(rooty->getLeftChild());
        cout << rooty->getData() << " ";
        inOrder(rooty->getRightChild());
    }
}//print the data in all nodes in the tree, in ascending order, separate by spaces (there should be a space after the last output value)

