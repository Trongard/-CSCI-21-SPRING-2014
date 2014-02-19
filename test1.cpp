include <fstream>
include <iostream>
using namespace std;

/*  ifstream -- input/read
    ofstream -- output/write
    
    for any file i/o:
    1. attempt to open the file
    2. check to be sure it opened error-free
    3. do the desired operations
    4. close the file
    
*/



int main ()
{
    ifstream filein("test.txt");
    if (filein.good() == true) {
        cout << "Ready to read input from test.txt." << endl;
        string nextline;
        while (filein >> nextline) // the 'easy' way alt.: !filein.eof()
        {
            cout << "read -> " << nextline << endl;
        }
    }
    else
    {
        cout << "Unable to open test.txt for input." << endl;
    }
    return 0;
}