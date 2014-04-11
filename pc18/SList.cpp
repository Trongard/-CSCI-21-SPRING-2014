#include"SList.h"
#include "SLNode.h"

#include <iostream>
using namespace std;

SLList::SLList()//sets values 
:head(NULL), size(0)
{
    
}

SLList::~SLList()
{
    clear();
}

void SLList::insertHead (int value)
{
    SLNode* newNode = new SLNode(value);
    newNode->setNextNode(head);
    head = newNode;
    size++;
}

void SLList::removeHead ()
{
    if(head != NULL)
    {
        SLNode* temp = head;
        head = head->getNextNode();
        delete temp;
        size--;
    }
}

void SLList::clear ()
{
    while (head != NULL)
    {
        removeHead();
    }
}

unsigned int SLList::getSize () const
{
    return size;
}

string SLList::toString () const
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
}
	                         