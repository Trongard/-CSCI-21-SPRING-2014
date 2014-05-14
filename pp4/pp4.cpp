/*
 * CSCI 21 Programming Project #4
 * Using a binary search tree as a data structure.
 *
 * Robert McAnulty
 * Date created: 30Apr14
 * Last date modified: 14May14
 *
 * SOURCES: my pp3, pc21, pc25, etc.
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
            int data = 0;
            ss >> data;
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
                    treey->insert(data);
                    cout << "VALUE " << data << " INSERTED" << endl;
                    break;
            //find word in tree
                case 'F':
                    if(treey == NULL)
                    {
                        cout << "TREE EMPTY" << endl;
                    }
                    else if(treey->find(data))
                    {
                        cout << "FOUND " << word << endl;
                    }
                    else
                    {
                        cout << word << " NOT FOUND" << endl;
                    }
                    
            //remove word from tree -- remove: "REMOVED x", "x NOT FOUND", or "TREE EMPTY" if empty
                case 'R':
                    if(treey == NULL)
                        cout << "TREE EMPTY" << endl;
                    else
                    {
                        if(remove(data))
                        {
                            cout << "REMOVED " << data << endl;
                        }
                        else
                            cout << data << " NOT FOUND" << endl;
                    }
                    break;
            //get word from tree 
                case 'G':
                    if(treey->get(data))
                        cout << "GOT " << word << count << endl;
                    else
                        cout << word << " NOT FOUND" << endl;
                    break;
            //show number of items in the tree
                case 'N':
                    cout << "TREE SIZE IS " << treey->getSize() << endl;
                    break;
            //print items in tree in-order 
                case 'O':
                    if(treey != NULL)
                        cout << *treey << endl;
                    else
                        cout << "TREE EMPTY" << endl;
                    break;
            //print items in tree reverse in-order 
                case 'E':
                    if(treey != NULL)
                        cout << *treey << endl;
                    else
                        cout << "TREE EMPTY" << endl;
                    break;
            }
        }
    }
    return 0;
}
