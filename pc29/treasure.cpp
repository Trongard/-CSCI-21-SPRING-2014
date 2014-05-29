#include "treasure.h"

/*
 * Add an item to the end of the chest.
 * @param newItem the item to be added to the end of the chest
 */
void TreasureChest::addItem (const Item& newItem)
{
    chest.push_back(newItem);
}

/*
 * Insert an item at the specified zero-indexed position in the chest.
 * If position is not valid for the chest, add the item to 
 * the end of the chest.
 * @param newItem the item to be inserted into the chest
 * @param position the zero-indexed position where the insertion
 *        is to take place
 */
void TreasureChest::insertItem (const Item& newItem, unsigned int position)
{
    cout << newItem << position << endl;
}

/*
 * Get a pointer to an item at a specified zero-indexed position in the chest.
 * @param position the zero-indexed position of the item
 * @return a pointer to the item if position is valid, else NULL
 */
const Item* TreasureChest::getItem (unsigned int position)
{
    cout << position << endl;
    return 0;
}

/*
 * Remove an item from the chest at a specified zero-indexed position.
 * @param position the zero-indexed position of the item
 * @return a copy of the Item removed from the chest
 * @throw string("ERROR: attempting remove at invalid position") if
 *        position is not valid
 */
Item TreasureChest::removeItem (unsigned int position) throw (string)
{
    cout << position << endl;
    return Item();
}

/*
 * Clear the chest of all items.
 */
void TreasureChest::clear ()
{
    chest.clear();
}

/*
 * Check to see if the chest is empty.
 * @return true if the chest is empty, else false
 */
bool TreasureChest::empty () const
{
    if(chest.empty())
        return true;
    else
        return false;
}

/*
 * Get the size/number of items currently in the chest.
 * @return an unsigned integer containing the current size of the chest
 */
unsigned int TreasureChest::getSize () const
{
    return chest.size();
}

/*
 * Sort the items in the chest by name, using the sort function 
 * from the C++ standard algorithm library.
 */
void TreasureChest::sortByName ()
{
    
}

/*
 * Sort the items in the chest by value, using the sort function 
 * from the C++ standard algorithm library.
 */
void TreasureChest::sortByValue ()
{
    
}

/*
 * Sort the items in the chest by quantity, using the sort function 
 * from the C++ standard algorithm library.
 */
void TreasureChest::sortByQuantity ()
{
    
}

/*
 * Place the names of the items in the chest on the specified stream,
 * formatted as ITEM_NAME,ITEM_NAME,...ITEM_NAME
 */
ostream& operator<< (ostream& outs, const TreasureChest& src)
{
    
    outs << src;
    return outs;
}

/*
 * Compare two items by name.
 * @return true if lsrc.name < rsrc.name, else false
 */
bool compareItemsByName (const Item& lsrc, const Item& rsrc)
{
    cout << lsrc << rsrc << endl;
    return true;
}

/*
 * Compare two items by value.
 * @return true if lsrc.value < rsrc.value, else false
 */
bool compareItemsByValue (const Item& lsrc, const Item& rsrc)
{
    cout << lsrc << rsrc << endl;
    return true;
}

/*
 * Compare two items by quantity.
 * @return true if lsrc.quantity < rsrc.quantity, else false
 */
bool compareItemsByQuantity (const Item& lsrc, const Item& rsrc)
{
    cout << lsrc << rsrc << endl;
    return true;
}