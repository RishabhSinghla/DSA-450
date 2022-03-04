#include <iostream>
#include <queue>
//Priority Queue -> means a queue which has first element as the greatest
//Lets understand -> We push elements to a priority queue...whenever we pop out an element
//we will always get maximum element out of those... this is called max heap
//and in min heap...we will get minimum out of the queue
//default is max heap
using namespace std;

int main()
{
    //max_heap
    priority_queue<int> maxi;
    
    //min_heap
    priority_queue<int, vector<int>, greater<int>> mini;
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    
    int size = maxi.size();
    
    for(int i=0; i<size; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    //Whenever we print...we get the top as the maximum element in the priority queue
    
    cout<<endl;
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    
    int size2 = mini.size();
    
    for(int i=0; i<size2; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    
    
}
