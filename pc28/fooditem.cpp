#include "fooditem.h"

FoodItem::FoodItem(string newName, unsigned int newValue, unsigned int newCalories, string newUnitOfMeasure, float newUnits)
:Item(newName, newValue), calories(newCalories), unitOfMeasure(newUnitOfMeasure), units(newUnits)
{
    
}//one constructor, default arguments for name("fooditem"), value(0), calories(0), unitOfMeasure("nounits"), units(0); 
            //calls Item constructor in its initialization section with name and value
            
FoodItem::~FoodItem()
{
    
}

void FoodItem::setCalories(unsigned int newCalories)
{
    calories = newCalories;
}

void FoodItem::setUnitOfMeasure(string newUnitOfMeasure)
{
    unitOfMeasure = newUnitOfMeasure;
}

void FoodItem::setUnits(float newUnits)
{
    units = newUnits;
}

unsigned int FoodItem::getCalories()
{
    return calories;
}

string FoodItem::getUnitOfMeasure()
{
    return unitOfMeasure;
}

float FoodItem::getUnits()
{
    return units;
}

string FoodItem::toString()
{
    stringstream temp;
    temp.setf(ios::fixed | ios::showpoint);
    temp.precision(2);
    temp << Item::toString() << ", " << units << " " << unitOfMeasure << ", " << calories << " calories";
    return temp.str();
}// returns string with name, value, units and unit of measure, calories;  units formatted to exactly two decimal places
                  // (uses Item::toString in its implementation) format -- NAME, $VALUE, UNITS UNITOFMEASURE, CALORIES calories
		          // EXAMPLE -- cookie, 1, 2.50 cookie(s), 250 calories
