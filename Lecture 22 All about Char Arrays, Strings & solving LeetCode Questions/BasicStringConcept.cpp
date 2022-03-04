#include <iostream>
//char name[] is same as ===== string name
using namespace std;

//check if the given string is palindrome
bool palindrome(char name[], int n)
{
    int s = 0;
    int e = n-1;
    
    while(s<=e)
    {
        if(name[s++]!=name[e--])
        {
            return false;
        }
    }
    return true;
}



//reverse a string
void reverse(char name[], int n)
{
    int s = 0;
    int e = n-1;
    
    while(s<=e)
    {
        swap(name[s++],name[e--]);
    }
}


//length of a string
int length(char name[])
{
    int count = 0;
    
    int i = 0;
    while(name[i]!='\0')  //start from 0 and go until null character
    {
        count++;
        i++;
    }
    return count;
}

int main()
{
    char name[20];
    cin>>name;
    
    int le = length(name);
    
    cout<<"Length of a string-> "<<le<<endl;
    reverse(name,le);
    cout<<"Reverse of a string-> "<<name<<endl;
    cout<<"Is the string palindrome-> "<<palindrome(name,le);
    return 0;
}
