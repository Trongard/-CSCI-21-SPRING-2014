#include "treasure.h"

/*
 * Add an item to the end of the chest.
 * @param newItem the item to be added to the end of the chest
 */
void addItem (const Item& newItem)
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
void insertItem (const Item& newItem, unsigned int position)
{
    chest.
}

/*
 * Get a pointer to an item at a specified zero-indexed position in the chest.
 * @param position the zero-indexed position of the item
 * @return a pointer to the item if position is valid, else NULL
 */
const Item* getItem (unsigned int position)
{
    
}

/*
 * Remove an item from the chest at a specified zero-indexed position.
 * @param position the zero-indexed position of the item
 * @return a copy of the Item removed from the chest
 * @throw string("ERROR: attempting remove at invalid position") if
 *        position is not valid
 */
Item removeItem (unsigned int position) throw (string)
{
    
}

/*
 * Clear the chest of all items.
 */
void clear ()
{
    chest;
}

/*
 * Check to see if the chest is empty.
 * @return true if the chest is empty, else false
 */
bool empty () const
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
unsigned int getSize () const
{
    
}

/*
 * Sort the items in the chest by name, using the sort function 
 * from the C++ standard algorithm library.
 */
void sortByName ()
{
    
}

/*
 * Sort the items in the chest by value, using the sort function 
 * from the C++ standard algorithm library.
 */
void sortByValue ()
{
    
}

/*
 * Sort the items in the chest by quantity, using the sort function 
 * from the C++ standard algorithm library.
 */
void sortByQuantity ()
{
    
}

/*
 * Place the names of the items in the chest on the specified stream,
 * formatted as ITEM_NAME,ITEM_NAME,...ITEM_NAME
 */
friend ostream& operator<< (ostream& outs, const TreasureChest& src)
{
    
}

/*
 * Compare two items by name.
 * @return true if lsrc.name < rsrc.name, else false
 */
bool compareItemsByName (const Item& lsrc, const Item& rsrc)
{
    
}

/*
 * Compare two items by value.
 * @return true if lsrc.value < rsrc.value, else false
 */
bool compareItemsByValue (const Item& lsrc, const Item& rsrc)
{
    
}

/*
 * Compare two items by quantity.
 * @return true if lsrc.quantity < rsrc.quantity, else false
 */
bool compareItemsByQuantity (const Item& lsrc, const Item& rsrc)
{
    
}