#pragma once

class Box
{
    Public:
        Box (unsigned int boxNumber, string boxColor, unsigned int prizeCapacity, unsigned int prizeCount);
        Box (unsigned int boxNumber=0, string boxColor="NO COLOR", unsigned int prizeCapacity=5, unsigned int prizeCount=0);
        unsigned int getPrizeCapacity () const;
        unsigned int getPrizeCount () const;
        unsigned int getBoxNumber () const;
        string getBoxColor () const;
        void setBoxNumber;
        void setBoxColor;
        
    Private:
        unsigned int boxNumber;
        string boxColor;
        Prize scratch;
        Prize* prizes;
        unsigned int prizeCapacity;
        unsigned int prizeCount;
};