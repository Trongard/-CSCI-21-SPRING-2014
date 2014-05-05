#include "BSTNode.h"

//default constructor, sets values leftChild(NULL), rightChild(NULL), and contents(0)
BSTNode::BSTNode()
:leftChild(NULL), rightChild(NULL), contents(0)
{
    
}

//overloaded constructor, int parameter assigned to contents
BSTNode::BSTNode(int contents)
:contents(newContents)
{
    
}

//destructor, sets leftChild and rightChild to NULL
BSTNode::~BSTNode()
{
    leftChild = NULL;
    rightChild = NULL;
}

void BSTNode::setContents (int)
{
    
}

int BSTNode::getContents () const
{
    return contents;
}

int& BSTNode::getContents ()
{
    return contents;
}

void BSTNode::setLeftChild (BSTNode*)
{
    
}

void BSTNode::setRightChild (BSTNode*)
{
    
}

BSTNode* BSTNode::getLeftChild () const
{
    return leftChild;
}

BSTNode*& BSTNode::getLeftChild ()
{
    return leftChild;
}

BSTNode* BSTNode::getRightChild () const
{
    return rightChild;
}

BSTNode*& BSTNode::getRightChild ()
{
    return rightChild;
}
