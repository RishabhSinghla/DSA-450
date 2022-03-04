#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//Reverse a string
void reverseString(vector<char>& s) 
{
    int st = 0;
    int en = s.size()-1;

    while(st<=en)
    {
        swap(s[st++],s[en--]);
    }
}

int main()
{
    string v = "Hello";  //Extra things that we did
 
    vector<char> s(v.begin(), v.end()); //first create a string then store in vector of characters
    //Hello in string v is stored as vector in s as ["h","e","l","l","o"]
    reverseString(s);
    for (const char &c: s) {
        cout << c;
    }
}
