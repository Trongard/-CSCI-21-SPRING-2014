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
            //cout << "nextline: " << nextline << endl;
            if (nextline[0] == '#')
            {
                cout << "Comment" << endl;
            }
            else if (nextline[0] == 'I')
            {
                string strval = nextline.substr(2);
                stringstream ss(strval);
                int intval = 0;
                ss >> intval;
                cout << "Inserting a value: " << intval << endl;
            }
        }
    }
    
    
    
    
    return 0;
}
