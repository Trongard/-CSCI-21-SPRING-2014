//
// Grader comments 2014.05.29
// -35 points total
//
/*
 * CSCI 21 Programming Project #4
 * Using a binary search tree as a data structure.
 *
 * Robert McAnulty
 * Date created: 30Apr14
 * Last date modified: 14May14
 *
 * SOURCES: my pp3, pc21, pc25, pc27, etc.
 */
 
#include "BSTree.h"
#include "BSTNode.h"
#include "Tword.h"

#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    if(argc == 1)
    {
        cout << "Enter file with call: ";
        return 1;
    }
    ifstream fin(argv[1]);
    BSTree<Word>* treey;
    
    if (fin.good())
    {
        string nextline;
        while (getline(fin, nextline))
        {
            stringstream ss(nextline.substr(1));
            string data;
            ss >> data;
			
			//
			// Grader comments 2014.05.29
			// Need "MUST CREATE TREE INSTANCE" for most
			// commands when the tree is empty. Added some
			// code here to get the unit test to run.
			// -10 points
			//
			if((nextline[0] != '#') && (nextline[0] != 'C') && (treey == NULL)) {
				cout << "MUST CREATE TREE INSTANCE" << endl;
				continue;
			}
			
            switch (nextline[0])
            {
                
                case '#':
                    break;
            //create tree
                case 'C':
                    treey = new BSTree<Word>;
                    cout << "TREE CREATED" << endl;
                    break;
            //clear tree
                case 'X':
                    treey->clear();
                    cout << "TREE CLEARED" << endl;
                    break;
            //delete tree
                case 'D':
                    delete treey;
                    treey = NULL;
                    cout << "TREE DELETED" << endl;
                    break;
            //insert word in tree 
                case 'I':
					//
					// Grader comments 2014.05.29
					// Should say "WORD", not "VALUE". Also, if the
					// value is already there in the tree, the message
					// should say "INCREMENTED" rather than "INSERTED".
					// Added some code here to get the unit test to run.
					// -5 points
					//
				{
					bool const alreadyThere = (treey->get(data) != 0);
					
                    treey->insert(data);

					if(alreadyThere == true) {
						cout << "WORD " << data << " INCREMENTED" << endl;
					} else {
	                    cout << "WORD " << data << " INSERTED" << endl;
					}
				}
                    break;
            //find word in tree
                case 'F':
                    if(treey == NULL)
                    {
                        cout << "TREE EMPTY" << endl;
                    }
                    else if(treey->find(data))
                    {
                        cout << "FOUND " << data << endl;
                    }
                    else
                    {
                        cout << data << " NOT FOUND" << endl;
                    }
                    
            //remove word from tree -- remove: "REMOVED x", "x NOT FOUND", or "TREE EMPTY" if empty
                case 'R':
				//
				// Grader comments 2014.05.29
				// When treey == NULL, there is no tree. "TREE EMPTY" means that
				// there is a tree, but there's nothing on it. Added some
				// code here to get the unit test to run.
				// -5 points
				//
				if(treey->getSize() == 0) {
					cout << "TREE EMPTY" << endl;
					continue;
				}

                    if(treey == NULL)
                        cout << "TREE EMPTY" << endl;
                    else
                    {
                        if(treey->remove(data))
                        {
                            cout << "REMOVED " << data << endl;
                        }
                        else
                            cout << data << " NOT FOUND" << endl;
                    }
                    break;
            //get word from tree 
                case 'G':
				//
				// Grader comments 2014.05.29
				// Need to check for empty tree. Added some
				// code here to get the unit test to run.
				// -5 points
				//
				if(treey->getSize() == 0) {
					cout << "TREE EMPTY" << endl;
					continue;
				}

                    if(treey->get(data))
                        cout << "GOT " << data << treey->get(data)->getData().getCount() << endl;
                    else
                        cout << data << " NOT FOUND" << endl;
                    break;
            //show number of items in the tree
                case 'N':
                    cout << "TREE SIZE IS " << treey->getSize() << endl;
                    break;
            //print items in tree in-order 
                case 'O':
				//
				// Grader comments 2014.05.29
				// When treey == NULL, there is no tree. "TREE EMPTY" means that
				// there is a tree, but there's nothing on it. Added some
				// code here to get the unit test to run.
				// -5 points
				//
				if(treey->getSize() == 0) {
					cout << "TREE EMPTY" << endl;
					continue;
				}
                    if(treey != NULL)
                        treey->inOrder();
                    else
                        cout << "TREE EMPTY" << endl;
                    break;
            //print items in tree reverse in-order 
                case 'E':
				//
				// Grader comments 2014.05.29
				// When treey == NULL, there is no tree. "TREE EMPTY" means that
				// there is a tree, but there's nothing on it. Added some
				// code here to get the unit test to run.
				// -5 points
				//
				if(treey->getSize() == 0) {
					cout << "TREE EMPTY" << endl;
					continue;
				}
                    if(treey != NULL)
                        treey->reverseOrder();
                    else
                        cout << "TREE EMPTY" << endl;
                    break;
            }
        }
    }
    return 0;
}
