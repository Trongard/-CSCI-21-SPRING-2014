

class Item
{
    private:
    
    	string name; //containing the name of the item
    	unsigned int value; //containing the value of the item
    	
    public:
    
    	Item();//one constructor, default arguments for name("item") and value(0)
    	
    	virtual ~Item();
    	
    	setName();
    	setValue();
    	
    	getName();
    	getValue();
    	
    	toString(); //returns string with name and value
    			    //format --  NAME, $VALUE
    	            //EXAMPLE -- shoes, $25
};
