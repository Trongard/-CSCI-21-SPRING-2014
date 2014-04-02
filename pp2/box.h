#pragma once
#include "prize.h"
#include <string>
using namespace std;

class Box
{
    public:
        Box ();
        Box (unsigned int, string, unsigned int);
        unsigned int getPrizeCapacity () const;
        unsigned int getPrizeCount () const;
        unsigned int getBoxNumber () const;
        string getBoxColor () const;
        void setBoxNumber(unsigned int);
        void setBoxColor(string);
        ~Box();
        bool addPrize(Prize prize);
        Prize& getPrize(unsigned int index);
        Prize removePrize(unsigned int index);
        
    private:
        unsigned int boxNumber;
        string boxColor;
        Prize scratch;
        Prize* prizes;
        unsigned int prizeCapacity;
        unsigned int prizeCount;
};