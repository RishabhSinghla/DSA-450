#include <iostream>
#include<map>
//In map, the elements are stored in key,value pair
//All keys are unique
//One key points to one value
//multiple values can point to one key, but not vice versa
//Sorted by default in map...in case of un_ordered map it is not sorted
//Map is implemented through red black tree
//Unordered Map is implemented through hashtable
using namespace std;

int main ()
{
    map<int, string> m;
    
    m[1] = "babbar";  //Here 1 is key and babbar is value
    m[2] = "rishabh";
    m[13] = "prince";
    
    //another way of inserting
    
    m.insert({5,"bheem"});
    
    // m.erase(13);
    
    for(auto i : m)
    {
        cout<<i.first<<" <--key and value--> "<<i.second<<" ";  //using.first access key....using.second access value
    }
    
    auto it = m.find(5);
    
    for(auto i=it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
}
