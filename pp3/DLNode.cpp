#include "DLNode.h"

DLNode::DLNode ()
:contents(0), next(NULL), previous(NULL)
{
    
}

DLNode::DLNode (int newContents)
:contents(newContents), next(NULL), previous(NULL)
{
    
}

DLNode::~DLNode ()
{
    
}

void DLNode::setContents (int newContents)
{
    contents = newContents;
}

void DLNode::setNext (DLNode* newNext)
{
    next = newNext;
}

void DLNode::setPrevious (DLNode* newPrevious)
{
    previous = newPrevious;
}

int DLNode::getContents () const
{
    return contents;
}

DLNode* DLNode::getNext () const
{
    return next;
}

DLNode* DLNode::getPrevious () const
{
    return previous;
}
