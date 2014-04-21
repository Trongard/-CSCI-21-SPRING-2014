
#pragma once
#include<iostream>
using namespace std;

template<class T>
class Box {
    public:
        Box(T contents)
        {
            contents = newContents;
        }
        
        void setContents(T newContents)
        {
            contents = newContents;
        }
        
        T getContents() const
        {
            return contents;
        }
        
        friend bool operator
        {
            
        }
    
    private:
        T contents;
    };
