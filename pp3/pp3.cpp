//
// Grader comments 2014.05.15
// + 50: naming conventions good
// + 25: header documentation missing in DLNode.h
// + 50: formatting good
// - 10: makefile -- see comments in Makefile
// + 97: driver -- see comments below; look for "grader comments" and "Rob"
// +150: DLNode good
// +245: DLList -- see comments DLList.cpp
// 
/*
 * CSCI 21 Programming Project #3
 * Using a double-linked list to create a dynamically linked data structure.
 *
 * Robert McAnulty
 * Date created: 14Apr14
 * Last date modified: 24Apr14
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

//
// Grader comments 2014.05.15
// - 10: Should allow a filename to be specified on the command line.
// - 14: All but one of the commands should report MUST CREATE LIST if there
//       is no list.
// -  6: A, E, G, P, R, Z should report EMPTY LIST when the list has no items in it.
// -  5: Wrong message on empty list for T and K.
// - 12: A & Z report zero in all cases.
// -  6: K removes head instead of tail.
//
int main()
{
    cout << "Please input file to be opened: " << endl;
    
	// Rob changed filename in order to test
    ifstream fin("/Users/robbishop/Development/school/grading-Boyd-csci21/t3.txt");
    DLList* listy;
    
    if (fin.good())
    {
        string nextline;
        while (getline(fin, nextline))
        {
            stringstream ss(nextline.substr(1));
            int data = 0;
            ss >> data;
			
			// Rob
			if((nextline[0] != 'C') && (nextline[0] != '#') && (listy == NULL)) {
				cout << "MUST CREATE LIST" << endl;
				continue;
			}
			
			// Rob
			char missingChecks[] = {'A', 'E', 'Z', 'R', 'G', 'P'};
			bool reportedEmpty = false;
			
			for(int i = 0; i < 6; ++i) {
				if((missingChecks[i] == nextline[0]) && (listy->getSize() == 0)) {
					cout << "LIST EMPTY" << endl;
					reportedEmpty = true;
					break;
				}
			}
			
			if(reportedEmpty) {	// If the list is empty, we've reported it. So
				continue;		// move on to the next command in the input file.
			}
			
			
            switch (nextline[0])
            {
                
                case '#':
                    break;
            //create list: 
                case 'C':
                    listy = new DLList;
                    cout << "LIST CREATED" << endl;
                    break;
            //clear list: 
                case 'X':
                    listy->clear();
                    cout << "LIST CLEARED" << endl;
                    break;
            //delete list: 
                case 'D':
                    delete listy;
                    listy = NULL;
                    cout << "LIST DELETED" << endl;
                    break;
            //insert element in list (sorted): I number (number will be an int value)
                case 'I':
                    listy->insert(data);
                    cout << "VALUE " << data << " INSERTED" << endl;
                    break;
            //add element to front of list: F number (number will be an int value)
                case 'F':
                    listy->pushFront(data);
                    cout << "VALUE " << data << " ADDED TO HEAD" << endl;
                    break;
            //add element to back of list: B number (number will be an int value)
                case 'B':
                    listy->pushBack(data);
                    cout << "VALUE " << data << " ADDED TO TAIL" << endl;
                    break;
            //get contents of head node: 
                case 'A':
                    listy->getFront();
                    cout << "VALUE " << data << " AT HEAD" << endl;
                    break;
            //get contents of tail node: 
                case 'Z':
                    listy->getBack();
                    cout << "VALUE " << data << " AT TAIL" << endl;
                    break;
            //remove element from front of list: 
                case 'T':
                    if(listy != NULL)
                    {
                        try 
                        {
                             listy->popFront();
                             cout << "REMOVED HEAD" << endl;
                        }
                        catch(...)
                        {
							// Rob: should say LIST EMPTY
                            cout << "EMPTY LIST" << endl;
                        }
                    }
                    else
                        cout << "LIST EMPTY" << endl;
                    break;
            //remove element from back of list: 
                case 'K':
                    if(listy != NULL)
                    {
                        try 
                        {
                             listy->popFront();
                             cout << "REMOVED HEAD" << endl;
                        }
                        catch(...)
                        {
							// Rob: should say LIST EMPTY
                            cout << "EMPTY LIST" << endl;
                        }
                    }
                    else
                        cout << "LIST EMPTY" << endl;
                    break;
            //eliminate element from list: E number (number will be the value to be eliminated -- eliminate all occurrences of the value from the list)
                case 'E':
                    if(listy->removeAll(data))
                        cout << "VALUE " << data << " ELIMINATED" << endl;
                    else
                        cout << "VALUE " << data << " NOT FOUND" << endl;
                    break;
            //remove element from list: R number (number will be the value to be removed -- remove only the first occurrence of the value from the list)
                case 'R':
                    if(listy->removeFirst(data))
                        cout << "VALUE " << data << " REMOVED" << endl;
                    else
                        cout << "VALUE " << data << " NOT FOUND" << endl;
                    break;
            //get element from list: G number (number will be the value to be retrieved)
                case 'G':
                    if(listy->get(data))
                        cout << "VALUE " << data << " FOUND" << endl;
                    else
                        cout << "VALUE " << data << " NOT FOUND" << endl;
                    break;
            //show number of items in the list: 
                case 'N':
                    cout << "LIST SIZE IS " << listy->getSize() << endl;
                    break;
            //print all items in the list: 
                case 'P':
                    if(listy != NULL)
                        cout << *listy << endl;
                    else
                        cout << "LIST EMPTY" << endl;
                    break;
            }
        }
    }
    return 0;
}
