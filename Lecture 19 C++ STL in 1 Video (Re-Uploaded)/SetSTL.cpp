#include <iostream>
#include <unordered_set>
#include<set>
//Set only contains unique values
//If 5 is entered 10 times...only one time 5 gets inserted
//Behind the scene using BST it happends
//Elements returned in sorted order
//In unordered set, it is fast than set and fetched in random order
using namespace std;

int
main ()
{
  set < int >s;

  s.insert (50);
  s.insert (5);
  s.insert (5);
  s.insert (5);
  s.insert (-5);
  s.insert (10);
  s.insert (3);

for (int i:s)
    {
      cout << i << " ";
    }

  cout << endl;
  //prints the set in sorted order

  s.erase (s.begin ());		//it deletes the begin element
for (int i:s)
    {
      cout << i << " ";
    }

  cout << "is 5 present: " << s.count (5) << endl;	//using count tells if the element is present or not

  set < int >::iterator itr = s.find (5);	// we get the reference for element 5 in itr

  unordered_set < int >us;

  us.insert (50);
  us.insert (5);
  us.insert (5);
  us.insert (5);
  us.insert (-5);
  us.insert (10);
  us.insert (3);
  us.insert(50);
    us.insert(5);
    us.insert(5);
    us.insert(5);
    us.insert(-5);
    us.insert(10);
    us.insert(3);


for (int i:us)
    {
      cout << "Element" << i << " ";
    }
}
