#include "BSTree.h"

//sets values rooty(NULL) and size(0)
BSTree::BSTree()
:root(NULL), size(0)
{
    
}

//calls the clear function
BSTree::~BSTree()
{
    clear();
}

//calls private function insert(data, root)
bool BSTree::insert (int datain)
{
    return insert(datain, root);
}

//call private function clear(root)
void BSTree::clear ()
{
    clear(root);
}

//
unsigned int BSTree::getSize () const
{
    return size;
}

//call private function inOrder(root)
void BSTree::inOrder ()
{
    inOrder(root);
}

//create a new BSTNode and insert it into the tree, returns true; if integer is already in the true, does not insert, returns false
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
            //cout << "Failed to enter! -- DUPLICATE!" << endl;
            return false;
        }
}
           
//clear the entire contents of the tree, freeing all memory associated with all nodes
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
}
           
//print the data in all nodes in the tree, in ascending order, separate by spaces (there should be a space after the last output value)
void BSTree::inOrder (BSTNode* rooty)
{
     if(rooty != NULL){
        inOrder(rooty->getLeftChild());
        cout << rooty->getData() << " ";
        inOrder(rooty->getRightChild());
    }
}
