public class Main
{
    //This program is for Bubble Sort
    //We compare each element with its neighbour
    //and swap if value of arr[j]>arr[j+1]
    //Like this we do n-1 rounds and always after ith rounds, the ith largest element gets sorted
    //Meaning, after every round...last m elements sorted hote jate hai
    public static void bubbleSort(int arr[], int n)
    {
        for(int i=1; i<n; i++)
        { //For Round 1 to Round N-1 we use loop from i=1 to i<n
            boolean swapped = false;
            for(int j=0; j<n-i; j++)  //--> Sara logic iska hai
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    swapped = true;
                }
            }
            if(swapped == false)
            { //already the array is sorted...so we will break out of the loop and over
                break;
            }
        }
    }
    
	public static void main(String[] args) {
	    int n = 6;
        int arr[] = {10, 1, 7, 6, 14, 9};
        bubbleSort(arr,n);
        
        for(int i=0; i<n; i++)
        {
            System.out.println(arr[i]);
        }
	}
}
