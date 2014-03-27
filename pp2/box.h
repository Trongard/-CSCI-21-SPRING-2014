#pragma once
#include <string>
using namespace std;

class Box
{
    Public:
        Box ();
        Box (unsigned int boxNumber=0, string boxColor="NO COLOR", unsigned int prizeCapacity=5, unsigned int prizeCount=0);
        unsigned int getPrizeCapacity () const;
        unsigned int getPrizeCount () const;
        unsigned int getBoxNumber () const;
        string getBoxColor () const;
        void setBoxNumber;
        void setBoxColor;
        ~Box();
        bool addPrize(Prize prize);
        Prize& getPrize(unsigned int index);
        Prize removePrize(unsigned int index);
        
    Private:
        unsigned int boxNumber;
        string boxColor;
        Prize scratch;
        Prize* prizes;
        unsigned int prizeCapacity;
        unsigned int prizeCount;
};