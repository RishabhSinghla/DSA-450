public class Main
{
    //The problem is to find the maximum value in an array that is in the 
    //form of mountain ... We have find mountain peak
    public static int peakIndexInMountainArray(int[] arr) {
        int start = 0, end = arr.length - 1;
        int mid = start + (end - start)/2;
        
        while(start<=end)   //---> also we can do (start<end)
        {
            if(arr[mid]<arr[mid+1])
            {
                start = mid + 1;
            }
            else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])  
            {
                return mid;   //---> Without using two else we can use one else and write
                            //---> end = mid;
            }
            else if(arr[mid]>arr[mid+1])
            {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return -1;
    }
    
	public static void main(String[] args) {
		int arr[] = {0,2,5,0};
		System.out.println(peakIndexInMountainArray(arr));
	}
}
