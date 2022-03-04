import java.util.*;
public class Main
{
//The program is for selectionSort T.C -> O(n2) S.C -> O(1)
//At each index we will compare the value with the minimum in whole array
//Then swap the ith position with the minimum in the array
    public static void selectionSort(int arr[], int n)
    {   
        // Write your code here.
        for(int i=0; i<n-1; i++)
        {
            int minIndex = i;   //Take ith element as minIndex...if in further array we found
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]<arr[minIndex])  //another minIndex so then
                {
                    minIndex = j; //we will swap those two numbers
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
	public static void main(String[] args) 
	{
	    int n = 5;
	    int arr[] = {6,2,8,4,10};
	    //ArrayList in java...having items present in it
        selectionSort(arr, n);
    
        for(int i=0; i<n; i++)
        {
            System.out.println(arr[i]);
        }
	}
}
