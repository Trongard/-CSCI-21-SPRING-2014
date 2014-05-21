#include<algorithm>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

bool sortQuantitiesAscending (unsigned int valA, unsigned int valB)
{
    return (valA < valB);
}

int main ()
{
    map<string, unsigned int> shoplist;
    shoplist["okra"] = 0;
    shoplist["apple"] = 2;
    shoplist["orange"] = 99;
    shoplist["pair of shoes"] = 1;
    shoplist["fez"] = 2;
    
    for(map<string, unsigned int>::const_iterator i=shoplist.begin(); i!=shoplist.end(); i++)
        cout << "Key -> " << i->first << ", value -> " << i->second << endl;
        
    shoplist["okra"]++;
    cout << "How much okra? " << shoplist["okra"] << " is too many." << endl;
    
    map<string, unsigned int>::iterator foundOkra = shoplist.begin();
    while(foundOkra != shoplist.end())
    {
        if(foundOkra->first == "okra")
            break;
        foundOkra++;
    }
    
    sort(shoplist.begin(), shoplist.end(), sortQuantitiesAscending);
    
    shoplist.erase(shoplist.begin());
    cout << "Shopping list has " <<
    
    return 0;
}

/*
    vector<int> iv;
    vector<string> sv;
    
    iv.push_back(10);
    iv.push_back(20);
    
    cout << "Number of integers: " << iv.size() << endl;
    if(!iv.empty())
        cout << "Integer vector not empty" << endl;
    
    for(unsigned int i=0; i<iv.size(); i++)
        cout << iv[i] << "-" << endl;
    
    iv.clear();
    
    sv.push_back("okra");
    sv.push_back("apple");
    sv.push_back("orange");
    sv.push_back("kiwi");
    
    cout << "Number of strings: " << sv.size() << endl;
    for(vector<string>::const_iterator i=sv.begin(); i!=sv.end(); i++)
        cout << *i << endl;
        
    cout << "Erasing okra" << endl;
    sv.erase(sv.begin());
    for(vector<string>::const_iterator i=sv.begin(); i!=sv.end(); i++)
        cout << *i << endl;
    
    cout << "Erasing orange" << endl;
    sv.erase(sv.begin() + 1);
    for(vector<string>::const_iterator i=sv.begin(); i!=sv.end(); i++)
        cout << *i << endl;
        
    while(!sv.empty())
        sv.pop_back();
*/