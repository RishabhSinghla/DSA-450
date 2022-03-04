#include <iostream>
#include <list>
//DLL is used to implement List, pointer in front and back
//Random access not possible directly...we have to traverse till the element
using namespace std;

int main()
{
    list<int> l;
    
    list<int> n(5, 100); //5 element in list, each having value 100
    
    l.push_back(1);
    l.push_front(2);
    
    for(int i:l)
    {
        cout<<i<<" ";
    }
    
    l.erase(l.begin());
    
    cout<<"size of list: "<<l.size()<<endl;
    
}
