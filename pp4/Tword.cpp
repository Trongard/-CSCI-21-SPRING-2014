//
// Grader comments 2014.05.29
// -5 points total
//
#include "Tword.h"

//default constructor
Word::Word()
:count(1)
{
    
}

//overloaded constructor, with string parameter (representing the "word")
Word::Word(string newWord)
:word(newWord),count(1)
{
    
}

//destructor
Word::~Word()
{
    
}

string Word::getWord()
{
    return word;
}

unsigned int Word::getCount()
{
    return count;
}

void Word::setWord(string newWord)
{
    word = newWord;
}

void Word::setCount(int newCount)
{
    count = newCount;
}

void Word::incCount()
{
    count++;
}

bool operator== (Word w1, Word w2)
{
    return (w1.word == w2.word);
}

bool operator< (Word w1, Word w2)
{
    return (w1.word < w2.word);
}

bool operator> (Word w1, Word w2)
{
    return (w1.word > w2.word);
}

ostream& operator<< (ostream& outy, Word wordy)
{
	//
	// Grader comments 2014.05.29
	// Should show the count for the word as well.
	// Added code to get unit test to work.
	// -5 points
	//
    outy << wordy.word << " " << wordy.count;
    return outy;
}
