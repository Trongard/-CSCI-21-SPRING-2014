#include "magicitem.h"

MagicItem::MagicItem(string newName, unsigned int newValue, string newDescription, unsigned int newManaRequired)
:Item(newName, newValue), description(newDescription), manaRequired(newManaRequired)
{
    
}// default arguments for name("magicitem"), value(0), description("no description"), manaRequired(0); calls Item constructor in 
		    // its initialization section with name and value
		    
MagicItem::~MagicItem()
{
    
}// does nothing

void MagicItem::setDescription(string newDescription)
{
    description = newDescription;
}

void MagicItem::setManaRequired(unsigned int newManaRequired)
{
    manaRequired = newManaRequired;
}

string MagicItem::getDescription()
{
    return description;
}

unsigned int MagicItem::getManaRequired()
{
    return manaRequired;
}

string MagicItem::toString()
{
    stringstream temp;
    temp << Item::toString() << ", " << description <<  ", requires " << manaRequired << " mana";
    return temp.str();
}// returns string with name, value, description, mana required (uses Item::toString in its implementation)
		          // format -- NAME, $VALUE, DESCRIPTION, requires MANAREQUIRED mana EXAMPLE -- hat, 10, made of felt, requires 2 mana
		          