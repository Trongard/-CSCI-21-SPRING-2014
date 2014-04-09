Declare and implement a class that provides the following interface EXACTLY.

class SList
{

public function interface:

	SList();//sets values head(NULL) and size(0)
	
	~SList();// calls the clear function
	
	void insertHead (int);//create a new SLNode and attach as head of list
	
	void removeHead ();//remove the head node from the list
	
	void clear ();//clear the entire contents of the list, freeing all memory
	             //associated with all nodes
	
	unsigned int getSize () const;
	
	string toString () const;//return a string representation of the contents
	                         // of all nodes in the list, in the format
	                         // NUM1,NUM2,...,LASTNUM; return empty string on 
	                         // empty list
	                         
private data members:

	SLNode* head;
	unsigned int size;
	
};