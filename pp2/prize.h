#pragma once
#include <string>
using namespace std;

class Prize
{
    public:
        Prize(string newItemName="NO NAME", unsigned int newItemValue=0);
        string getPrizeName () const;
        unsigned int getPrizeValue () const;
        void setPrizeName(string itemName);
        void setPrizeValue(unsigned int itemValue);
        ~Prize();
        friend bool operator ==(Prize left, Prize right);
    
    private:
        string prizeName;
        unsigned int prizeValue;
};