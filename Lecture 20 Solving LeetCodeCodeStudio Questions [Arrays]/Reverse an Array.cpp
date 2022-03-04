#include <iostream>
#include<bits/stdc++.h>

using namespace std;
//Program us to reverse an array
void reverseArray(vector<int> &arr, int m)
{
    // Write your code here.
    int start = m+1;
    int end = arr.size() - 1;
    
    while(start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
    
int main()
{
    int m = 3;
    int arr2[] = {10, 4, 5, 2, 3, 6, 1, 3, 6};
	vector<int> arr;
	
    for(int i: arr2)
    {
        arr.push_back(i);
    }
	reverseArray(arr, m);
	
	for(int i=0; i<arr.size(); i++)
	{
	    cout<<arr[i]<<" ";
	}
}
