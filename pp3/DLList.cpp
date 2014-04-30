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
    DLNode* newNode= new DLNode(newContents);
    
    newNode->setNext(head);
    head=newNode;
    
    if(head->getNext()==NULL)
    {
        tail=head;
    }
    else
    {
        head->getNext()->setPrevious(head);
    }
    
    size++;
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
    if(head == NULL || newContents < head->getContents())
    {
        pushFront(newContents);
        return;
    }
    
    DLNode* temp = head;
    
    while(temp->getNext() != NULL)
    {
        DLNode* nextTemp = temp->getNext();
        if(nextTemp->getContents() > newContents)
        {
            DLNode* inserted = new DLNode(newContents);
            
            inserted->setPrevious(temp);
            inserted->setNext(nextTemp);
            
            temp->setNext(inserted);
            nextTemp->setPrevious(inserted);
            
            size++;
            return;
        }
        temp = temp->getNext();
    }
    pushBack(newContents);
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
    if(head == NULL)
    {
        return false;
    }
    else
    {
        DLNode* temp = head;
        while(temp->getNext() != NULL)
        {
            if(temp->getContents() == target || temp->getNext()->getContents() == target)
            {
                return true;
            }
            temp = temp->getNext();
        }
        return false;
    }
}

//remove current head node; do nothing if list is empty
void DLList::popFront ()
{
    if (head == NULL)
        return;
    else if(head != NULL)
    {
        DLNode* temp = head;
        head=head->getNext();
        delete temp;
        size--;
    }
    
    if(head != NULL && tail != head)
    {
        head->setPrevious(NULL);
    }
    else
    {
        tail=NULL;
    }
}

//remove current tail node; do nothing if list is empty
void DLList::popBack ()
{
    if(tail==NULL)
        return;
    else if(tail != NULL)
    {
        DLNode* temp = tail;
        tail=tail->getPrevious();
        delete temp;
        size--;
    }
    
    if(tail != NULL && tail != head)
    {
        tail->setNext(NULL);
    }
    else
    {
        head=NULL;
    }
}

//remove the first instance of a DLNode containing target; do nothing if target is not found
bool DLList::removeFirst (int target)
{
    if(head == NULL)
    {
        return false;
    }
    else if(head->getContents()==target)
    {
        popFront();
        return true;
    }
    else
    {
        DLNode* temp = head;
        while(temp->getNext() != NULL)
        {
            DLNode* nextTemp = temp->getNext();
            if(temp->getContents() == target)
            {
                temp->getPrevious()->setNext(nextTemp);
                nextTemp->setPrevious(temp->getPrevious());
                
                delete temp;
                size--;
                if(size == 1)
                {
                    head = tail;
                }
                return true;
            }
            temp = temp->getNext();
        }
        if(temp->getContents() == target)
        {
            popBack();
            return true;
        }
        return false;
    }
}

//remove all instances of DLNode containing target; do nothing if target is not found
bool DLList::removeAll (int target)
{
    bool temp = removeFirst(target);
    while(removeFirst(target));
    return temp;
}

//clear all nodes from list, reset size to zero, set head and tail to NULL
void DLList::clear ()
{
    while(head != NULL)
        popFront();
    size = 0;
    head = NULL;
    tail = NULL;
}

//display the contents of each node in the list, formatted per the program specification ("NUM1,NUM2,NUM3,...,NUMX"), to the output stream out
ostream& operator<< (ostream& out, const DLList src)
{
    DLNode* temp = src.head;
    stringstream returned;
    while(temp != NULL)
    {
        returned << temp->getContents();
        if(temp->getNext() != NULL)
            returned << ", ";
        temp=temp->getNext();
    }
    out << returned.str();
    return out;
}
