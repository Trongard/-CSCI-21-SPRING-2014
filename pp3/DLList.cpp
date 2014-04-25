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
    if (head!= NULL)
    {
        cout << head->getContents() << endl;
        cout << head->getPrevious()->getContents() << endl;
        cout << head->getNext()->getContents() << endl;
    }
    
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
            cout << "inserting here" << endl;
            
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
    cout << "interted at end" << endl;
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
    DLNode* temp = head;
    if(head == NULL)
        return;
    else if(head == tail)
    {
        head = tail = NULL;
        delete temp;
        size--;
    }
    else
    {
        head = head->getNext();
        head->setPrevious(NULL);
        delete temp;
        size--;
    }
    if(size == 1)
    {
        tail = head;
    }
}

//remove current tail node; do nothing if list is empty
void DLList::popBack ()
{
    if(tail == NULL)
        return;
    else if(head == tail)
    {
        head = tail = NULL;
        delete head;
        size--;
    }
    else
    {
        DLNode* temp = tail;
        tail = tail->getPrevious();
        tail->setNext(NULL);
        
        delete temp;
        size--;
    }
    if(size == 1)
    {
        head = tail;
    }
}

//remove the first instance of a DLNode containing target; do nothing if target is not found
bool DLList::removeFirst (int target)
{
    if(head == NULL)
    {
        return false;
    }
    else
    {
        DLNode* temp = head;
        cout << temp->getNext()->getContents() << endl;
        while(temp->getNext() != NULL)
        {
            cout << "here" << temp->getContents() << " , ";
            if(temp->getContents() == target)
            {
                if(temp == head)
                {
                    popFront();
                }
                else if(temp == tail)
                {
                    popBack();
                }
                else
                {
                    temp->getPrevious()->setNext(temp->getNext());
                    temp->getNext()->setPrevious(temp->getPrevious());
                }
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
        cout << "Exit while" << endl;
        if(temp->getContents() == target)
        {
            cout << "Enter if" << endl;
            popBack();
            cout << "After pop" << endl;
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
    while(temp != NULL)
    {
        out << temp->getContents();
        temp = temp->getNext();
        if(temp != NULL)
        {
            out << ",";
        }
    }
    return out;
}
