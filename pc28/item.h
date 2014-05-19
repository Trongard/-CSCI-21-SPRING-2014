#pragma once
#include <string>
#include <cstdlib>
#include <sstream>
#include <iostream>

using namespace std;

class Item
{
    private:
    
    	string name; //containing the name of the item
    	unsigned int value; //containing the value of the item
    	
    public:
    
    	Item(string newName="item",unsigned int newValue=0);//one constructor, default arguments for name("item") and value(0)
    	
    	virtual ~Item();
    	
    	void setName(string);
    	void setValue(unsigned int);
    	
    	string getName();
    	unsigned int getValue();
    	
    	string toString(); //returns string with name and value
    			    //format --  NAME, $VALUE
    	            //EXAMPLE -- shoes, $25
};
