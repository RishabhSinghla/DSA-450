public class Main
{
    //In Java the function should be public static
    public static int binarySearch(int arr[], int key)   //T.C of binary Search O(logn)
    //always B.S works on monotonic functions
    {
        int start = 0, end = arr.length; //In java using arr.length we can find lenght of array, 
        //which is not posssible in C++
        int mid = start + (end-start)/2;  //chalaki wali chiz, for big integer values
        
        while(start<=end)
        {
            if(arr[mid] == key)
            {
                return mid;
            }
            else if(key>arr[mid])
            {
                start = mid + 1;  // Go to right part if key is greater than mid
            }
            else
            {
                end = mid - 1;  // Go to left part if key is smaller than mid
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }
    
	public static void main(String[] args) {
		int n = 5; 
        int arr[] = {1,2,3,4,5};
        int key = 4;
        System.out.println(binarySearch(arr,key));
	}
}
