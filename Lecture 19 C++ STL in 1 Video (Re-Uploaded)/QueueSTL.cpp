#include <iostream>
#include <queue>
//FIFO - FirstInFirstOut
using namespace std;

int main()
{
    queue<string> q;
    
    q.push("rishabh");
    q.push("singhla");
    q.push("prince");
    
    cout<<"First Element: "<<q.front()<<endl;
    
    // q.pop();
    
    // q.size();
}
