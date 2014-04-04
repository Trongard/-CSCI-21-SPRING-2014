#include "prize.h"


Prize::Prize(string newItemName, unsigned int newItemValue)
{
    prizeName = newItemName;
    prizeValue = newItemValue;
}

string Prize::getPrizeName () const
{
    return prizeName;
}

unsigned int Prize::getPrizeValue () const
{
    return prizeValue;
}

void Prize::setPrizeName(string itemName)
{
    prizeName = itemName;
}

void Prize::setPrizeValue(unsigned int itemValue)
{
    prizeValue = itemValue;
}

Prize::~Prize()
{
    // Left blank cause Boyd said!
}

bool operator ==(Prize left, Prize right)
{
    if(left.prizeValue == right.prizeValue && left.prizeName == right.prizeName){
        return true;
    }
    return false;
}
