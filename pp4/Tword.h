#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>


class Word
{
    public:
        Word; //default constructor
        Word; //overloaded constructor, with string parameter (representing the "word")
        virtual ~Word;//destructor
        string getWord;
        unsigned int getCount;
        void setWord;
        void setCount;
        void incCount;
        friend ostream& operator== ();
        friend ostream& operator< ();
        friend ostream& operator> ();
        friend ostream& operator<< ();
    private:
        string word;//to contain the "word" assigned to this Word instance
        unsigned int count = 1;// containing the count of the number of instances the "word" was encountered in the input
};
