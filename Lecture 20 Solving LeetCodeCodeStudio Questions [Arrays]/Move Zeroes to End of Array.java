import java.util.ArrayList;
import java.util.Collections;
import java.util.*;
public class Main{
    //Program to place all zeros to end of array
    public static void moveZeroes(int nums[], int n) 
    {
        int i = 0;
        
        for(int j = 0; j < n; j++)
        {
            if(nums[j]!=0)
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++;
            }
        }
    }
    
	public static void main(String[] args) {
	    int arr[] = {0,1,0,3,12};
        int n = 5;
        moveZeroes(arr,n);
    	
    	for(int i=0; i<n; i++)
    	{
    	    System.out.println(arr[i]);
    	}
	}
}
