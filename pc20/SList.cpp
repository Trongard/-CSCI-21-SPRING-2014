#include "SList.h"

SList::SList
:head(NULL), size(0)
{
    
}// sets values head(NULL) and size(0)

SList::~SList
{
    clear();
}// calls the clear function

void SList::insertHead (int)
{
    SLNode* 
    size++;
}// create a new SLNode and attach as head of list

void SList::insertTail (int)
{
    SLNode* 
    size++;
}// create a new SLNode and attach at the end of list

void SList::removeHead ()
{
    size--;
}// remove the head node from the list

void SList::removeTail ()
{
    size--;
}// remove the tail node from the list

void SList::insert (int)
{
    
}// create a new SLNode and insert it in the correct position
                   // in the list so that the values in the nodes are in 
                   // ascending order from head node to tail node

bool SList::removeFirst (int)
{
    
}// remove the first appearance of the parameter value;
                      // return true on success or false if the value is not in the list

void SList::clear ()
{
    
}// clear the entire contents of the list, freeing all memory
               // associated with all nodes

unsigned int SList::getSize () const
{
    
}

string SList::toString () const
{
    
}// return a string representation of the contents
                          // of all nodes in the list, in the format
                          // NUM1,NUM2,...,LASTNUM; return empty string on 
                          // empty list