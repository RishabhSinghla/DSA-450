#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//The program is for selectionSort T.C -> O(n2) S.C -> O(1)
//At each index we will compare the value with the minimum in whole array
//Then swap the ith position with the minimum in the array
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0; i<n-1; i++)
    {
        int minIndex = i;//Take ith element as minIndex...if in further array we found
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])//another minIndex so then
            {
                minIndex = j;//we will swap those two numbers
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main()
{
    vector<int> arr{6,2,8,4,10};  //vector in C++
    int n=5;
    
    selectionSort(arr, n);
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\n";
    }
}