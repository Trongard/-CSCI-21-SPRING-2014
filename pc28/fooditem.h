#pragma once
#include "item.h"

class FoodItem:public Item
{
    private:
    
    	unsigned int calories;
    	string unitOfMeasure;// (such as "ounces")
    	float units;
    	
    public:
    
    	FoodItem(string newName="fooditem", unsigned int newValue=0, unsigned int newCalories=0, string newUnitOfMeasure="nounits", float newUnits=0); 
    	            //one constructor, default arguments for name("fooditem"), value(0), calories(0),
    	            //unitOfMeasure("nounits"), units(0); calls Item constructor
    	            //in its initialization section with name and value
    	virtual ~FoodItem();
    	
    	void setCalories(unsigned int);
    	void setUnitOfMeasure(string);
    	void setUnits(float);
    	
    	unsigned int getCalories();
    	string getUnitOfMeasure();
    	float getUnits();
    	
    	string toString();// returns string with name, value, units and unit of measure, calories; 
    			   // units formatted to exactly two decimal places
    	           // (uses Item::toString in its implementation)
    			   // format -- NAME, $VALUE, UNITS UNITOFMEASURE, CALORIES calories
    			   // EXAMPLE -- cookie, 1, 2.50 cookie(s), 250 calories
};
