#include "box.h"



Box::Box ()
{
    boxNumber=0;
    boxColor="NO COLOR";
    prizeCapacity=5;
    prizeCount=0;
    prizes=new Prize[prizeCapacity];
}

Box::Box (unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity, unsigned int newPrizeCount)
{
    boxNumber=newBoxNumber;
    boxColor=newBoxColor;
    prizeCapacity=newPrizeCapacity;
    prizeCount=newPrizeCount;
    prizes=new Prize[prizeCapacity];
}

unsigned int Box::getPrizeCapacity () const
{
    return prizeCapacity;
}

unsigned int Box::getPrizeCount () const
{
    return prizeCount;
}

unsigned int Box::getBoxNumber () const
{
    return boxNumber;
}

string Box::getBoxColor () const
{
    return boxColor;
}

void Box::setBoxNumber(unsigned int number)
{
    boxNumber = number;
}

void Box::setBoxColor(string color)
{
    boxColor = color;
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
