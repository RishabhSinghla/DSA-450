import java.util.ArrayList;
import java.util.Collections;
import java.util.*;
public class Main{
//Program to rotate an array by K
public static void rotate(int []nums, int k) 
{
    int []arr = new int [nums.length];
    
    for(int i=0; i<nums.length; i++)
    {
        int g = (i+k)%nums.length;
        arr[g] = nums[i];
    }
    
    int f = 0;
    for(int t : arr)
    {
        nums[f] = t;
        f++;
    }
}
    
	public static void main(String[] args) 
	{
	    int arr[] = {1,2,3,4,5,6,7};
	    int k = 3;
	    rotate(arr,k);
    	for(int i=0; i<arr.length; i++)
    	{
    	    System.out.println(arr[i]);
    	}
	}
}
