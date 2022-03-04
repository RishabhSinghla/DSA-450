#include <iostream>

using namespace std;
//cin stops execution if it sees (space, tab, enter, new line)
int main()
{
    char name[20];
    
    cin>>name;
    
    // name[2] = '\0'; --> using this we get the values till index 0-1
    // as cin sees \0 it will stop and print the things before it.
    
    cout<<name;
    
    return 0;
}
