#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//The problem is aggressiveCows
//We have to find the maximum difference between the cows
//the array elements contain numbers, from which we have to subtract to obtain
//maximum difference
bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i=0; i<stalls.size(); i++)
    {
        if(stalls[i]-lastPos >= mid)
        {
            cowCount++;
            if(cowCount == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end()); //sort in C++
    int s = 0;
    int e = stalls[stalls.size()-1];
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    vector<int> arr{4,2,1,3,6};  //vector in C++
    int cow = 2;
    cout<<aggressiveCows(arr, cow);
}