#include <iostream>
using namespace std;
//Check palindrome of a string that has spaces and characters as well
//S = “c1 O$d@eeD o1c”.  this is palindrome
//remove spaces, special char, convert upper to lower and then check
bool checkPalindrome(string s)
{
    int n=s.length();
    int S=0 , e;
    string temp="";
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            temp.push_back(s[i]);
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            temp.push_back((char)(s[i]+32));
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            temp.push_back(s[i]);
        }
    }
    e=temp.size()-1;
	while(S<e)
    {
    	if(temp[S]!=temp[e])
      	{
        	return false;
      	}
        else
        {
           	S++;
     		e--; 
        }
   	}
    return true;
}

int main()
{
    string s = "aaBBa@";
    cout<<checkPalindrome(s);
}
