#include <iostream>
#include <algorithm>
#include <vector>
//working behind of sorting
//intro sort -> quick + heap + insertion sort se banta hai
using namespace std;

int main ()
{
    vector<int> v;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(2);
    v.push_back(10);
    
    cout<<"Finding 6: "<<binary_search(v.begin(), v.end(), 7)<<endl;
    //Binary Search Inbuilt in algorithm
    
    cout<<"Lower Bound-> "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    
    int a = 5;
    int b = 6;
    cout<<"Max-> "<<max(a,b); //min(a,b)
    
    swap(a,b);  //swapping with algorithms
    
    cout<<b;
    
    string abcd = "abcde";
    reverse(abcd.begin(), abcd.end());  //reverse function to reverse a string
    
    cout<<abcd;
    
    rotate(v.begin(), v.begin()+1, v.end());  //rotate a vector
    for(int i:v)
    {
        cout<<i<<endl;
    }
    
    sort(v.begin(), v.end());
    for(int i:v)
    {
        cout<<i<<endl;
    }
    
    //working behind of sorting
    //intro sort -> quick + heap + insertion sort se banta hai
}
