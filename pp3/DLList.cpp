#include "DLList.h"
#include "DLNode.h"

//initialize count to zero, head and tail to NULL
DLList ()
:count(0),head(NULL),tail(NULL)
{
    
}

//call clear function
virtual ~DLList ()
{
    clear();
}

//return count
unsigned int getSize () const
{
    return count;
}

//create new DLNode with newContents and attach at head
void pushFront (int newContents)
{
    DLNode* temp = newContents;
    head.setPrevious = temp;
    temp.setNext = head.getNext;
}

//create new DLNode with newContents and attach at tail
void pushBack (int newContents)
{
    DLNode* newContents;
    tail.setNext = temp;
    temp.setPrevious = tail.getPrevious;
}

//create new DLNode with newContents and insert in ascending (based on newContents) order
void insert (int newContents)
{
    if(newContents < )
    {
        
    }
    DLNode* newContents;
}

//return the value of the contents of the head node; throw an exception (throw "LIST EMPTY") if the list is empty
int getFront () const
{
    if(count == 0)
    {
        throw ArrayException("LIST EMPTY");
    }
    else
    {
        return head.contents;
    }
}

//return the value of the contents of the tail node; throw an exception (throw "LIST EMPTY") if the list is empty
int getBack () const
{
    if(count == 0)
    {
        throw ArrayException("LIST EMPTY");
    }
    else
    {
        return tail.contents;
    }
}

//return true if target is in list, else return false
bool get (int target) const
{
    if(target in)
        return true;
    else
        return false;
}

//remove current head node; do nothing if list is empty
void popFront ()
{
    temp = head;
    if(head == NULL)
        //No operation
    else if(head == tail)
    {
        head = tail = NULL;
        delete temp;
        count--;
    }
    else
    {
        head = head->getNext;
        head.setPrevious=NULL;
        delete temp;
        count--;
    }
}

//remove current tail node; do nothing if list is empty
void popBack ()
{
    temp = tail;
    if(head == NULL)
        //No operation
    else if(head == tail)
    {
        head = tail = NULL;
        delete temp;
        count--;
    }
    else
    {
        tail = tail->getPrevious;
        tail.setNext=NULL;
        delete temp;
        count--;
    }
}

//remove the first instance of a DLNode containing target; do nothing if target is not found
bool removeFirst (int target)
{
    
}

//remove all instances of DLNode containing target; do nothing if target is not found
bool removeAll (int target)
{
    
}

//clear all nodes from list, reset count to zero, set head and tail to NULL
void clear ()
{
    count = 0;
    head = NULL;
    tail = NULL;
}

//display the contents of each node in the list, formatted per the program specification ("NUM1,NUM2,NUM3,...,NUMX"), to the output stream out
friend ostream& operator<< (ostream& out, const DLList& src)
{
    out << src.contents;
    return out;
}
