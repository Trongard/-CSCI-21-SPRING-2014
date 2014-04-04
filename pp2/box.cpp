#include "box.h"



Box::Box ()
{
    boxNumber=0;
    boxColor="NO COLOR";
    prizeCapacity=5;
    prizeCount=0;
    prizes=new Prize[prizeCapacity];
}

Box::Box (unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity)
{
    boxNumber=newBoxNumber;
    boxColor=newBoxColor;
    prizeCapacity=newPrizeCapacity;
    prizeCount=0;
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
    delete [] prizes;
}

bool Box::addPrize(Prize prize)
{
    if(prizeCapacity > prizeCount){
        for(unsigned int i=0; i<prizeCapacity; ++i){
            if(prizes[i] == scratch){
                prizes[i] = prize;
                ++prizeCount;
                return true;
            }
        }
        return false;
    }
    else
    {
        return false;
    }
}

Prize& Box::getPrize(unsigned int index)
{
    if(prizeCapacity > index){
        return prizes[index];
    }
    else
    {
        return scratch;
    }
}

Prize Box::removePrize(unsigned int index)
{
    if(prizeCapacity > index){
        Prize temp = prizes[index];
        if(!(temp == scratch)){
            --prizeCount;
        }
        prizes[index] = scratch;
        return temp;
    }
    return scratch;
}
