#include "DLList.h"
#include "DLNode.h"

//initialize size to zero, head and tail to NULL
DLList::DLList ()
:size(0),head(NULL),tail(NULL)
{
    
}

//call clear function
DLList::~DLList ()
{
    clear();
}

//return size
unsigned int DLList::getSize () const
{
    return size;
}

//create new DLNode with newContents and attach at head
void DLList::pushFront (int newContents)
{
    DLNode* temp = new DLNode(newContents);
    temp->setNext(head);
    head = temp;
    size++;
    
    if(head->getNext() == NULL)
    {
        tail = head;
    }
    else
    {
        head->getNext()->setPrevious(head);
    }
}

//create new DLNode with newContents and attach at tail
void DLList::pushBack (int newContents)
{
    DLNode* temp = new DLNode(newContents);
    temp->setPrevious(tail);
    tail = temp;
    size++;
    
    if(tail->getPrevious() == NULL)
    {
        head = tail;
    }
    else
    {
        tail->getPrevious()->setNext(tail);
    }
}

//create new DLNode with newContents and insert in ascending (based on newContents) order
void DLList::insert (int newContents)
{
    if(newContents < 0)
    {
        
    }
    DLNode* newNode = new DLNode(newContents);
}

//return the value of the contents of the head node; throw an exception (throw "LIST EMPTY") if the list is empty
int DLList::getFront () const
{
    if(size == 0)
    {
        throw string("LIST EMPTY");
    }
    else
    {
        return head->getContents();
    }
}

//return the value of the contents of the tail node; throw an exception (throw "LIST EMPTY") if the list is empty
int DLList::getBack () const
{
    if(size == 0)
    {
        throw string("LIST EMPTY");
    }
    else
    {
        return tail->getContents();
    }
}

//return true if target is in list, else return false
bool DLList::get (int target) const
{
    if(target)
        return true;
    else
        return false;
}

//remove current head node; do nothing if list is empty
void DLList::popFront ()
{
    DLNode* temp = head;
    if(head == NULL)
        //No operation
    else if(head == tail)
    {
        head = tail = NULL;
        delete temp;
        size--;
    }
    else
    {
        head = head->getNext;
        head.setPrevious=NULL;
        delete temp;
        size--;
    }
}

//remove current tail node; do nothing if list is empty
void DLList::popBack ()
{
    if(head != NULL)
    {
        DLNode* i = head;
        DLNode* trailer = NULL;
        
        while(i->getNext() != NULL)
        {
            trailer = i;
            i = i->getNext();
        }
        delete i;
        size--;
        if(trailer == NULL)
        {
            head = NULL;
        }
        else
        {
            trailer->setNext(NULL);
        }
    }
    
    DLNode* temp = tail;
    if(head == NULL)
        //No operation
    else if(head == tail)
    {
        head = tail = NULL;
        delete temp;
        size--;
    }
    else
    {
        tail = tail->getPrevious;
        tail.setNext=NULL;
        delete temp;
        size--;
    }
}

//remove the first instance of a DLNode containing target; do nothing if target is not found
bool DLList::removeFirst (int target)
{
    
}

//remove all instances of DLNode containing target; do nothing if target is not found
bool DLList::removeAll (int target)
{
    
}

//clear all nodes from list, reset size to zero, set head and tail to NULL
void DLList::clear ()
{
    while(head != NULL)
        removeFirst();
    size = 0;
    head = NULL;
    tail = NULL;
}

//display the contents of each node in the list, formatted per the program specification ("NUM1,NUM2,NUM3,...,NUMX"), to the output stream out
friend ostream& operator<< (ostream& out, const DLList& src)
{
    out << src.contents;
    return out;
}
