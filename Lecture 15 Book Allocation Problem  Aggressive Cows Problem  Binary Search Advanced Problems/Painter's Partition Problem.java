import java.util.*;
public class Main
{
//The problem is Painters Partition problem
//It is exactly same as Book Allocation problem
public static boolean isPossible(ArrayList<Integer> boards, int k, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<boards.size(); i++)
    {
        if(pageSum + boards.get(i)<=mid)
        {
            pageSum += boards.get(i);
        }
        else
        {
            studentCount++;
            if(studentCount>k || boards.get(i)>mid)
            {
                return false;
            }
            pageSum = boards.get(i);
        }
    }
    return true;
}

public static int findLargestMinDistance(ArrayList<Integer> boards, int k)
{
    //    Write your code here.
    int s = 0;
    int sum = 0;
    for(int i=0; i<boards.size(); i++)
    {
        sum += boards.get(i);
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(isPossible(boards,k,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
	public static void main(String[] args) 
	{
	    ArrayList<Integer> arr = new ArrayList<Integer>(Arrays.asList(10,20,30,40));
	    //ArrayList in java...having items present in it
        int painter = 2;
        System.out.println(findLargestMinDistance(arr, painter));
	}
}
