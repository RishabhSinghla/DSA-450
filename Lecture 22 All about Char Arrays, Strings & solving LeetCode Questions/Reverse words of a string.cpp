#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//Program to reverse individual words in a string
//It is working, but the last word of the string is not reversed and printed
string wordReverse(string sp)
{
    int start = 0;
    int end = sp.length()-1;
    
    while(start<=end)
    {
        char temp = sp[start];
        sp[start] = sp[end];
        sp[end] = temp;
        start++;
        end--;
    }
    sp.push_back(' ');
    
    return sp;
    
}

string reverse(string s)
{
    string v = "";
    string newStr = "";
    int n = s.length();
    for(int i=0; i<n; i++)
    {
        if(s[i] != ' ')
        {
            v.push_back(s[i]);
        }
        else if((s[i] == ' ') || (i == n-1))
        {
            // str1.insert(5,"point")
            // str1.append(str2)
            newStr.append(wordReverse(v));
            v.clear();
        }
    }
    return newStr;
}

int main() {
	string s = "Hello World My name is Rishabh";
    string p = reverse(s);
    cout<<p;
    
}