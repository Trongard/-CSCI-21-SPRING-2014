#include "BSTNode.h"

//default constructor, sets values leftChild(NULL), rightChild(NULL), and data(0)
BSTNode::BSTNode()
:leftChild(NULL), rightChild(NULL), data(0)
{
    
}

//overloaded constructor, int parameter assigned to data
BSTNode::BSTNode(int newData)
:leftChild(NULL), rightChild(NULL), data(newData)
{
    
}

//destructor, sets leftChild and rightChild to NULL
BSTNode::~BSTNode()
{
    leftChild = NULL;
    rightChild = NULL;
}

void BSTNode::setData (int newData)
{
    data = newData;
}

int BSTNode::getData () const
{
    return data;
}

int& BSTNode::getData ()
{
    return data;
}

void BSTNode::setLeftChild (BSTNode* newLeftChild)
{
    leftChild = newLeftChild;
}

void BSTNode::setRightChild (BSTNode* newRightChild)
{
    rightChild = newRightChild;
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
