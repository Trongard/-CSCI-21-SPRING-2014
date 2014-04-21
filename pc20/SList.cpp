#include "SList.h"

SList::SList()
:head(NULL), size(0)
{
    
}// sets values head(NULL) and size(0)

SList::~SList()
{
    clear();
}// calls the clear function

void SList::insertHead (int value)
{
    SLNode* newNode = new SLNode(value);
    newNode->setNextNode(head);
    head = newNode;
    size++;
}// create a new SLNode and attach as head of list

void SList::insertTail (int value)
{
    if(head == NULL)
    {
        insertHead(value);
    }
    else
    {
        SLNode* newNode = new SLNode(value);
        SLNode* temp = head;
        while(temp->getNextNode() != NULL)
        {
            temp = temp->getNextNode();
        }
        temp->setNextNode(newNode);
        size++;
    }
}// create a new SLNode and attach at the end of list

void SList::removeHead ()
{
    if(head != NULL)
    {
        SLNode* temp = head;
        head = head->getNextNode();
        delete temp;
        size--;
    }
}// remove the head node from the list

void SList::removeTail ()
{
    if(head != NULL)
    {
        SLNode* i = head;
        SLNode* trailer = NULL;
        
        while(i->getNextNode() != NULL)
        {
            trailer = i;
            i = i->getNextNode();
        }
        delete i;
        size--;
        if(trailer == NULL)
        {
            head = NULL;
        }
        else
        {
            trailer->setNextNode(NULL);
        }
    }
}// remove the tail node from the list

void SList::insert (int value)
{
    if (head == NULL)
        insertHead(value);
    else if (head->getNextNode() == NULL)
    {
        if(value < head->getContents())
            insertHead(value);
        else
            insertTail(value);
    }
    else
    {
        if(value <= head->getContents())
            insertHead(value);
        else
        {
            SLNode* trailer = NULL;
            SLNode* spot = head;    
            while(spot->getNextNode() != NULL && value > spot->getContents())
            {
                trailer = spot;
                spot = spot->getNextNode();
            }
            if(value > spot->getContents())
            {
                insertTail(value);
            }
            else
            {
                SLNode* nodee = new SLNode(value);
                nodee->setNextNode(spot);
                trailer->setNextNode(nodee);
                size++;
            }
        }
    }
}// create a new SLNode and insert it in the correct position
                   // in the list so that the values in the nodes are in 
                   // ascending order from head node to tail node

bool SList::removeFirst (int value)
{

    if(head == NULL)
        return false;
    else
    {
        SLNode* trailer = NULL;
        SLNode* spot = head;
        while(spot != NULL && spot->getContents() != value)
        {
            trailer = spot;
            spot = spot->getNextNode();
        }
        if(spot == NULL)
            return false;
        else if(spot == head)
        {
            removeHead();
            return true;
        }
        else
        {
            trailer->setNextNode(spot->getNextNode());
            delete spot;
            size--;
            return true;
        }
    }
}// remove the first appearance of the parameter value;
                      // return true on success or false if the value is not in the list

void SList::clear ()
{
    while (head != NULL)
    {
        removeHead();
    }
}// clear the entire contents of the list, freeing all memory
               // associated with all nodes

unsigned int SList::getSize () const
{
    return size;
}

string SList::toString () const
{
    stringstream ss;
    
    for(SLNode* i=head; i!=NULL; i=i->getNextNode())
    {
        ss << i->getContents();
        if(i->getNextNode() != NULL)
        {
            ss << ",";
        }
    }
    
    return ss.str();
}// return a string representation of the contents
                          // of all nodes in the list, in the format
                          // NUM1,NUM2,...,LASTNUM; return empty string on 
                          // empty list
