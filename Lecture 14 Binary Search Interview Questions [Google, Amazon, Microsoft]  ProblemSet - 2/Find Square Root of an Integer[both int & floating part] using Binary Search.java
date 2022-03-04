public class Main
{
//The program is to find the square root of a number using B.S
//The program is to Find Square Root of an Integer[both int & floating part] using Binary Search
//We first find the square root without Precision
//After that for Precision, we will create a function that will add 0.1, 0.01, 0.001
//And check if the (new number * new number) == n
    public static int square(int n)
    {
        int start = 0, end = n;
        int mid = start + (end - start)/2;
        
        int ans = -1;
        while(start<=end)
        {
            int sqre = mid*mid;
            
            if(sqre==n)
            {
                return mid;
            }
            if(sqre<n) 
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }

    public static int mySqrt(int x) 
    {
        return square(x);
    }
    
    public static double morePrecision(int n, int precFac, int k)
    {
        double factor = 1;
        double ans = k;
        
        for(int i=0; i<precFac; i++)
        {
            factor = factor/10;
            for(double j=ans; j*j<n; j=j+factor)
            {
                ans = j;
            }
        }
        return ans;
    }

	public static void main(String[] args) {
	    int n = 37;
        int k = mySqrt(n);
    	int precFac = 3;
    	System.out.println("More Precision is "+(float)morePrecision(n, precFac, k));
	}
}
