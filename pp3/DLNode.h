#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

class DLNode
{
    public:
        DLNode ();
        DLNode (int newContents);
        
        virtual ~DLNode ();
        
        void setContents (int newContents);
        void setNext (DLNode* newNext);
        void setPrevious (DLNode* newPrevious);
        
        int getContents () const;
        DLNode*& getNext ();
        DLNode*& getPrevious ();
        
    private:
        int contents;
        DLNode* next;
        DLNode* previous;
};
