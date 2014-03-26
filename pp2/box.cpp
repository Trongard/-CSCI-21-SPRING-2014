#include "testbox.h"



Box::Box ()
{
    prizes=new Prize[prizeCapacity];
}

Box::Box (unsigned int boxNumber=0, string boxColor="NO COLOR", unsigned int prizeCapacity=5, unsigned int prizeCount=0)
{
    prizes=new Prize[prizeCapacity];
}

unsigned int Box::getPrizeCapacity () const
{
    
}

unsigned int Box::getPrizeCount () const
{
    
}

unsigned int Box::getBoxNumber () const
{
    
}

string Box::getBoxColor () const
{
    
}

void Box::setBoxNumber
{
    
}

void Box::setBoxColor
{
    
}

Box::~Box()
{
    
}

bool Box::addPrize(Prize prize)
{
    
}

Prize& Box::getPrize(unsigned int index)
{
    
}

Prize Box::removePrize(unsigned int index)
{
    
}
