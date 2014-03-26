#pragma once
#include <string>
using namespace std;

class Prize
{
    public:
        Prize(string itemName, unsigned int itemValue);
        Prize(string itemName="NO NAME", unsigned int itemValue=0);
        string getName () const;
        unsigned int getValue () const;
        void setName(string itemName);
        void setValue(unsigned int itemValue);
        ~Prize();
        friend bool operator ==(Prize left, Prize right);
    
    private:
        string prizeName;
        unsigned int prizeValue;
};