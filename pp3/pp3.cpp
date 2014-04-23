/*
 * CSCI 21 Programming Project #3
 * Using a double-linked list to create a dynamically linked data structure.
 *
 * Robert McAnulty
 * Date created: 14Apr14
 * Last date modified: 14Apr14
 *
 * SOURCES: project-3-unit-test.cpp, various projects and challenges of mine, etc.
 */
 
#include "DLList.h"
#include "DLNode.h"

#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please input file to be opened: " << endl;
    
    ifstream fin("file.txt");
    
    if (fin.good())
    {
        string nextline;
        while (getline(fin, nextline))
        {
            switch (nextline[0])
            {
                case '#':
                    break;
            //create list: 
                case 'C':
                    break;
            //clear list: 
                case 'X':
                    break;
            //delete list: 
                case 'D':
                    break;
            //insert element in list (sorted): I number (number will be an int value)
                case 'I':
                    break;
            //add element to front of list: F number (number will be an int value)
                case 'F':
                    pushFront();
                    break;
            //add element to back of list: B number (number will be an int value)
                case 'B':
                    pushBack();
                    break;
            //get contents of head node: 
                case 'A':
                    getFront();
                    break;
            //get contents of tail node: 
                case 'Z':
                    getBack();
                    break;
            //remove element from front of list: 
                case 'T':
                    popFront();
                    break;
            //remove element from back of list: 
                case 'K':
                    popBack();
                    break;
            //eliminate element from list: E number (number will be the value to be eliminated -- eliminate all occurrences of the value from the list)
                case 'E':
                    break;//remove element from list: R number (number will be the value to be removed -- remove only the first occurrence of the value from the list)
                case 'R':
                    break;//get element from list: G number (number will be the value to be retrieved)
                case 'G':
                    break;//show number of items in the list: 
                case 'N':
                    break;
            //print all items in the list: 
                case 'P':
                    break;
            }
        }
    }
    
    
    
    
    return 0;
}





