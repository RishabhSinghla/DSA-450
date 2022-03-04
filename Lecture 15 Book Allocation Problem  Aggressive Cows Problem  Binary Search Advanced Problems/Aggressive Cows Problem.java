import java.util.*;
public class Main
{
//The problem is aggressiveCows
//We have to find the maximum difference between the cows
//the array elements contain numbers, from which we have to subtract to obtain
//maximum difference
public static boolean isPossible(ArrayList<Integer> stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPos = stalls.get(0);

    for(int i=0; i<stalls.size(); i++)
    {
        if(stalls.get(i)-lastPos >= mid)
        {
            cowCount++;
            if(cowCount == k)
            {
                return true;
            }
            lastPos = stalls.get(i);
        }
    }
    return false;
}

public static int aggressiveCows(ArrayList<Integer> stalls, int k)
{
    Collections.sort(stalls);  //sort ArrayList in java
    int s = 0;
    int e = stalls.get(stalls.size()-1);  //.get() is used instead of [] for accessing array element
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
	public static void main(String[] args) 
	{
	    ArrayList<Integer> arr = new ArrayList<Integer>(Arrays.asList(4,2,1,3,6));
	    //ArrayList in java...having items present in it
        int cows = 2;
        System.out.println(aggressiveCows(arr, cows));
	}
}
