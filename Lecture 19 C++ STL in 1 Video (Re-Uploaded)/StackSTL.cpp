#include <iostream>
#include <stack>
//LIFO -> LastinFirstOut
using namespace std;

int main()
{
    stack<string> s;
    
    s.push("rishabh");
    s.push("Singhla");
    s.push("Prince");
    
    cout<<"Top element: "<<s.top()<<endl;
    
    //top m whi aata hai...jo last m stack m jaata hai
    
    // s.pop()
    
    // s.size();
    
    // s.empty()  to check whether stack empty or not
}
