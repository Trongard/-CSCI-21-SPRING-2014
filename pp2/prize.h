#pragma once

class Prize
{
    public:
        Prize(string itemName, unsigned int itemValue);
        Prize(string itemName="NO NAME", unsigned int itemValue=0);
        string getName () const;
        unsigned int getValue () const;
        void setName(string itemName);
        void setValue(unsigned int itemValue);
    
    private:
        string prizeName;
        unsigned int prizeValue;
};