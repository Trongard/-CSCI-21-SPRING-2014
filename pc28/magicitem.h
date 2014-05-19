#pragma once
#include "item.h"

class MagicItem:public Item
{
    private:
    
    	string description;
    	unsigned int manaRequired;
    	
    public:
    
    	MagicItem(string newName="magicitem", unsigned int newValue=0, string newDescription="no description", unsigned int newManaRequired=0);
    	            // default arguments for name("magicitem"), value(0), description("no description"), manaRequired(0); 
    			  // calls Item constructor in its initialization section with name and value
    	virtual ~MagicItem();// does nothing
    	
    	void setDescription(string);
    	void setManaRequired(unsigned int);
    
    	string getDescription();
    	unsigned int getManaRequired();
    	
    	string toString();// returns string with name, value, description, mana required (uses Item::toString in its implementation)
    			   // format -- NAME, $VALUE, DESCRIPTION, requires MANAREQUIRED mana - EXAMPLE -- hat, 10, made of felt, requires 2 mana
};
