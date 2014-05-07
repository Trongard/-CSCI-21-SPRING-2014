#include "BSTree.h"

//sets values rooty(NULL) and size(0)
BSTree::BSTree()
:rooty(NULL), size(0)
{
    
}

//calls the clear function
BSTree::~BSTree()
{
    clear();
}

//calls private function insert(data, rooty)
bool BSTree::insert (data)
{
    insert(data, rooty);
}

//call private function clear(rooty)
void BSTree::clear ()
{
    clear(rooty);
}

//
unsigned int BSTree::getSize () const
{
    return size;
}

//call private function inOrder(rooty)
void BSTree::inOrder ()
{
    inOrder(rooty);
}

//create a new BSTNode and insert it into the tree, returns true; if integer is already in the true, does not insert, returns false
bool BSTree::insert (data, rooty)
{
    insert(data, rooty){
    if(rooty == NULL)
        {
            rooty = new BSTNode(data);
        }
    else if(data < rooty->data)
        {
            insert(data,rooty->leftChild)
        }
    else if(data > rooty->data)
        {
            insert(data,rooty->rightChild)
        }
    else
        cout << "Failed to enter! -- DUPLICATE!" << endl;
        return false;
}
}
           
//clear the entire contents of the tree, freeing all memory associated with all nodes
void BSTree::clear (rooty)
{
    clear(rooty);
}
           
//print the data in all nodes in the tree, in ascending order, separate by spaces (there should be a space after the last output value)
void BSTree::inOrder (rooty)
{
     if(rooty != NULL){
        print Inorder(rooty->leftChild);
        cout << rooty->data;
        print Inorder(rooty->rightChild);
    }
}
