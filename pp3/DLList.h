#pragma once

#include <iostream>
#include "DLNode.h"

using namespace std;

class DLList
{
    public:
        DLList (); //initialize count to zero, head and tail to NULL
        virtual ~DLList (); //call clear function
        unsigned int getSize () const; //return count
        void pushFront (int newContents); //create new DLNode with newContents and attach at head; *should not be called in conjunction with insert
        void pushBack (int newContents); //create new DLNode with newContents and attach at tail; *should not be called in conjunction with insert
        void insert (int newContents); //create new DLNode with newContents and insert in ascending (based on newContents) order; *should not be called in conjunction with pushFront or pushBack
        int getFront () const; //return the value of the contents of the head node; throw an exception (throw "LIST EMPTY") if the list is empty
        int getBack () const; //return the value of the contents of the tail node; throw an exception (throw "LIST EMPTY") if the list is empty
        bool get (int target) const; //return true if target is in list, else return false
        void popFront (); //remove current head node; do nothing if list is empty
        void popBack (); //remove current tail node; do nothing if list is empty
        bool removeFirst (int target); //remove the first instance of a DLNode containing target; do nothing if target is not found
        bool removeAll (int target); //remove all instances of DLNode containing target; do nothing if target is not found
        void clear (); //clear all nodes from list, reset count to zero, set head and tail to NULL
        friend ostream& operator<< (ostream& out, const DLList& src); //display the contents of each node in the list, formatted per the program specification ("NUM1,NUM2,NUM3,...,NUMX"), to the output stream out
    private:
        unsigned int size;//data members: count of nodes, pointer to head node, pointer to tail node
        DLNode* head;
        DLNode* tail;
};
