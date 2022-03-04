#include <iostream>
#include<deque>
//it is a double ended queue, in which
//insertion and deletion can happen from both the ends
//Just to know-> deque has several static arrays in memory
//so it not contiguous
//deque is dynamic, means we can increase its size
using namespace std;

int main()
{
    deque<int> d;
    
    d.push_back(1);
    d.push_front(2);
    
    for(int i: d)
    {
        cout<<i<<" ";
    }
    
    // d.pop_back(); //d.pop_front();
    
    cout<<"Element at index: "<<d.at(1)<<endl;
    
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    
    cout<<"Empty or not: "<<d.empty()<<endl;
    
    //to erase a deque, we must give parameters
    //from where to where to delete
    
    d.erase(d.begin(), d.begin()+1);
    cout<<"after delete: "<<d.size()<<endl;
    
    for(int i: d)
    {
        cout<<i<<endl;
    }
    
}
