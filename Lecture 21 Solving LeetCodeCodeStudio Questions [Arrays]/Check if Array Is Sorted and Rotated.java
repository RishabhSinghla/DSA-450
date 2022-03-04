import java.util.ArrayList;
import java.util.Collections;
import java.util.*;
public class Main{
//Check if Array Is Sorted and Rotated
public static boolean check(int []nums) 
{
    int count = 0;
    
    for(int i=1; i<nums.length; i++)
    {
        if(nums[i-1]>nums[i])  //There will only be 0 or 1 pair that i-1 > i for an array to be sorted and rotated
                                //so we will go and check the count;
        {
            count++;    
        }
    }
    
    if(nums[nums.length-1] > nums[0])  //check for last and first element
   {
       count++;
   }
           
    return count<=1;
}
    
	public static void main(String[] args) 
	{
	    int []arr = {3,4,5,1,2};
        System.out.println(check(arr));
	}
}
