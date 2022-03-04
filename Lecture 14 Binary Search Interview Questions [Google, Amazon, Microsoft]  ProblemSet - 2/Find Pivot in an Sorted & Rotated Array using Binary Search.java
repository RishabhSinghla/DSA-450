public class Main
{
    //The problem is to find the PIVOT in sorted and rotated array
    // We have to find the minimum value
     public static int Pivot(int[] nums) {
        int start = 0, end = nums.length - 1;
        int mid = start + (end - start)/2;
        
        while(start<end)
        {
            if(nums[mid]>=nums[0]) //we compare with first element as all the previous elements would 
            // be smaller than mid element.
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        return start;
    }
    
	public static void main(String[] args) {
		int arr[] = {8,10,17,1,3};
		System.out.println(Pivot(arr));
	}
}
