#include "DLNode.h"

// initialize contents to zero, next and previous to NULL
DLNode::DLNode ()
:contents(0), next(NULL), previous(NULL)
{
    
}

// initialize contents to newContents, next and previous to NULL
DLNode::DLNode (int newContents)
:contents(newContents), next(NULL), previous(NULL)
{
    
}

// nothing to be done
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
