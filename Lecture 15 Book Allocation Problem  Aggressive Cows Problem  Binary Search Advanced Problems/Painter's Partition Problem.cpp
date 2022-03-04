#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//The problem is Painters Partition problem
//It is exactly same as Book Allocation problem
bool isPossible(vector<int> boards, int k, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<boards.size(); i++)
    {
        if(pageSum + boards[i]<=mid)
        {
            pageSum += boards[i];
        }
        else
        {
            studentCount++;
            if(studentCount>k || boards[i]>mid)
            {
                return false;
            }
            pageSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> boards, int k)
{
    //    Write your code here.
    int s = 0;
    int sum = 0;
    for(int i=0; i<boards.size(); i++)
    {
        sum += boards[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(isPossible(boards,k,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    vector<int> arr{10,20,30,40};  //vector in C++
    int painter = 2;
    cout<<findLargestMinDistance(arr, painter);
}