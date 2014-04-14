#include"SList.h"
#include "SLNode.h"

SList::SList()
:head(NULL), size(0)
{
    
}// sets values head(NULL) and size(0)
	
SList::~SList()
{
    clear();
}// calls the clear function

void SList::insertHead(int value)
{
    SLNode* newNode = new SLNode(value);
    newNode->setNextNode(head);
    head = newNode;
    size++;
}// create a new SLNode and attach as head of list

void SList::insertTail(int value)
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

void SList::removeHead()
{
    if(head != NULL)
    {
        SLNode* temp = head;
        head = head->getNextNode();
        delete temp;
        size--;
    }
}//remove the head node from the list

void SList::removeTail()
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
}//remove the tail node from the list

void SList::clear()
{
    while (head != NULL)
    {
        removeHead();
    }
}//clear the entire contents of the list, freeing all memory
               //associated with all nodes

unsigned int SList::getSize() const
{
    return size;
}

string SList::toString() const
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
}//return a string representation of the contents
                          //of all nodes in the list, in the format
                          //NUM1,NUM2,...,LASTNUM; return empty string on 
                          //empty list
                          