//
// Grader comments 2014.05.14
// -55 points total
//
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

//
// Grader comments 2014.05.14
// If the list has only one node on it, the while loop will not happen
// and the function will return false, even if the node matches the target.
// -5 points
//
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
		
		// Rob
		if(temp->getContents() == target) {
			return true;
		}
		
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

//
// Grader comments 2014.05.14
// Doesn't manage tail when necessary.
// head->setPrevious(NULL) needs to happen even if tail == head.
// Your driver is expecting an exception when the list is empty.
// -15 points
//
//remove current head node; do nothing if list is empty
void DLList::popFront ()
{
    if (head == NULL)
        //return;			// Rob
		throw false;		// Rob
    else if(head != NULL)
    {
        DLNode* temp = head;
        head=head->getNext();
        delete temp;
        size--;
		
		// Rob
		if(size == 1) {
			tail = head;
		}
    }
    
    //if(head != NULL && tail != head)	// Rob
	if(head != NULL)
    {
        head->setPrevious(NULL);
	}
    else
    {
        tail=NULL;
    }
}

//
// Grader comments 2014.05.14
// Doesn't manage tail when necessary.
// head->setPrevious(NULL) needs to happen even if tail == head.
// Your driver is expecting an exception when the list is empty.
// -15 points
//
//remove current tail node; do nothing if list is empty
void DLList::popBack ()
{
    if(tail==NULL)
        //return;			// Rob
		throw false;		// Rob
    else if(tail != NULL)
    {
        DLNode* temp = tail;
        tail=tail->getPrevious();
        delete temp;
        size--;
		
		// Rob
		if(size == 1) {
			head = tail;
		}
    }
    
    //if(tail != NULL && tail != head)	// Rob
	if(tail != NULL)
    {
        tail->setNext(NULL);
	}
    else
    {
        head=NULL;
    }
}

//
// Grader comments 2014.05.14
// Bad link management when finding a matching node on a one-node list
// Bad head link management when there is only one node left after delete
// -10 points
//
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

				if(nextTemp == NULL)	// Rob
				{
					tail = temp->getPrevious();
				}
				else
				{
					nextTemp->setPrevious(temp->getPrevious());
				}
                
                delete temp;
                size--;
                if(size == 1)
                {
                    //head = tail;	// Rob
					tail = head;
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

//
// Grader comments 2014.05.14
// The DLList in the function declaration needs to be a DLList&.
// Without the &, you're passing a copy of your original DLList object,
// but only the members of DLList are copied: head, tail, size. The
// nodes in the list aren't copied. Because head and tail are copied to
// the new object, your new object operates on the original nodes.
//
// When the end of this function is reached, your copy goes out of scope
// and runs the destructor, which deletes all of the nodes in its list,
// meaning that it just deleted all your nodes.
//
// When the program returns back to the calling function and tries to do
// something to the list again, your original DLList object still has
// the original head/tail/size values, so it tries to go through the
// list, but it fails because all the nodes are deleted. Let me know
// if all this doesn't make sense. It's not a huge error; it's just a good
// thing to know about how C++ deals with copying objects.
//
// -10 points
//
//display the contents of each node in the list, formatted per the program specification ("NUM1,NUM2,NUM3,...,NUMX"), to the output stream out
// Rob changed DLList to DLList&
ostream& operator<< (ostream& out, const DLList& src)
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
