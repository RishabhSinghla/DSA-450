#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//Function to find the maximum occurring character in a string.
char getMaxOccuringChar(string str)
{
    // Your code here
    int chara[26] = {0};
    int n = str.length();
    for(int i=0; i<n; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            chara[str[i]-'A']++;
        }
        else
        {
            chara[str[i]-'a']++;
        }
    }
    int maxi = -1, ans = -1;
    
    for(int i=0; i<26; i++)
    {
        if(maxi < chara[i])
        {
            ans = i;
            maxi = chara[i];
        }
    }
    
    return 'a'+ans;
}

int main() {
	string s = "Hello World My name is Rishabh";
    cout<<getMaxOccuringChar(s);
}