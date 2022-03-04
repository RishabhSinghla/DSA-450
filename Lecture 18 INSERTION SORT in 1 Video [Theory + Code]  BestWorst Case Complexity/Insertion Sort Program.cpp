#include <iostream>

using namespace std;
//insertionSort mai swapping nhi shifting hoti hai
void insertionSort(int arr[], int n)
{
    int curr = arr[0];
    
    for(int i=1; i<n; i++)
    {
        int ele = arr[i]; //pehle element store karaya
        int j=i-1;
        for(; j>=0; j--) //loop chalaya backward
        {
            if(arr[j]>ele)
            {
                //shift
                arr[j+1] = arr[j]; //agar koi element bada milta hai toh woh shift ho jayega aage
            }
            else
            {
                break; //nhi toh break karke aur piche aa jayenge
            }
        }
        arr[j+1] = ele;
    }
}

int main()
{
    int n = 7;
    int arr[] = {1,10,7,4,8,2,11};
    insertionSort(arr,n);
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
