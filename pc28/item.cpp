#include "item.h"

Item::Item(string newName, unsigned int newValue)
:name(newName), value(newValue)
{
    
}//one constructor, default arguments for name("item") and value(0)

Item::~Item()
{
    
}

void Item::setName(string newName)
{
    name = newName;
}

void Item::setValue(unsigned int newValue)
{
    value = newValue;
}

string Item::getName()
{
    return name;
}

unsigned int Item::getValue()
{
    return value;
}

string Item::toString()
{
    stringstream temp;
    temp << name << ", $" << value;
    return temp.str();
}//returns string with name and value - format --  NAME, $VALUE - EXAMPLE -- shoes, $25