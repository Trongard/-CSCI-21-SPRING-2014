#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>

using namespace std;

class Word
{
    public:
        Word(); //default constructor
        Word(string word); //overloaded constructor, with string parameter (representing the "word")
        virtual ~Word();//destructor
        string getWord();
        unsigned int getCount();
        void setWord();
        void setCount();
        void incCount();
        friend bool operator== (Word, Word);
        friend bool operator< (Word, Word);
        friend bool operator> (Word, Word);
        friend ostream& operator<< (ostream&, Word);
    private:
        string word;//to contain the "word" assigned to this Word instance
        unsigned int count;// containing the count of the number of instances the "word" was encountered in the input
};
