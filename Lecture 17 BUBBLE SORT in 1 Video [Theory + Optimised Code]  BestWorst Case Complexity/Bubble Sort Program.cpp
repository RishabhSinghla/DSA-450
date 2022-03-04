#include <iostream>

using namespace std;

//This program is for Bubble Sort
//We compare each element with its neighbour
//and swap if value of arr[j]>arr[j+1]
//Like this we do n-1 rounds and always after ith rounds, the ith largest element gets sorted
//Meaning, after every round...last m elements sorted hote jate hai
void bubbleSort(int arr[], int n)
{
    int k = n;
    while(k--)
    {
        bool swapped = false;
        int i = 0;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
                swapped = true;
                i++;
            }
            else
            {
                i++;
            }
        }
        if(swapped == false)
            { //already the array is sorted...so we will break out of the loop and over
                break;
            }
    }
}

int main()
{
    int n = 6;
    int arr[] = {10, 1, 7, 6, 14, 9};
    bubbleSort(arr,n);
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
