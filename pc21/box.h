
#pragma once
#include<iostream>
using namespace std;

template<class T>
class Box {
    public:
        Box(T newContents)
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
        
        friend ostream& operator<<(ostream& out, Box temp)
        {
            out << temp.contents;
            return out;
        }
    
    private:
        T contents;
    };
