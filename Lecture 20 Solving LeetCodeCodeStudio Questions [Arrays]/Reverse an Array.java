import java.util.ArrayList;
import java.util.Collections;
import java.util.*;
//Program to reverse an array
public class Main
{
    public static void reverseArray(ArrayList<Integer> arr, int m)
    {
        // Write your code here.
        int size = arr.size();
        int j = 1;
        for(int i=m+1; i<arr.size(); i++)
        {
            //swap i with n-1, i+1 with n-2...
            if(i<size-j)
            {
            	Collections.swap(arr, i, size-j);
                j++;
            }
        }
    }
    
	public static void main(String[] args) {
	    int m = 3;
	    int arr2[] = {10, 4, 5, 2, 3, 6, 1, 3, 6};
		ArrayList<Integer> arr = new ArrayList<Integer>();
		
	    for(int i: arr2)
	    {
	        arr.add(i);
	    }
		reverseArray(arr, m);
		
		for(int i=0; i<arr.size(); i++)
		{
		    System.out.println(arr.get(i));
		}
	}
}
