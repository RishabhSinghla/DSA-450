#include <iostream>
#include<vector>
//Vector is a dynamic array
//As soon as vector is full, it would double its size
//It would create a new vector and copy all elements to it as soon as first one is full
//We can also give its size
//When new vector is created, its size is 0
using namespace std;

int main()
{
    
    vector<int> a(5,1); //means 5 elements vector which has values 1
    
    vector<int> last(a); //last vector has all the elements of a
    
    vector<int> v;
    cout<<"capacity-> "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;
    //Size means kitne element pade h
    //capacity means kitne element ke liye jagah hai
    
    cout<<"Size-> "<<v.size()<<endl;
    
    cout<<"Element at 2nd index-> "<<v.at(2)<<endl;
    
    cout<<"front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;
    
    v.pop_back();
    cout<<"After Pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    
    cout<<"Size-> "<<v.size()<<endl;
    
    v.clear();
    //When we clear the vector the capacity is same,
    //It just clears the Element in It
    //Means it would do the size-> 0
    
    cout<<"Size-> "<<v.size()<<endl;
    
    
    
    
}
