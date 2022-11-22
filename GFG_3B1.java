import java.util.ArrayList;
import java.util.Scanner;

class GFG_3B1 {
	public static int ans = 10000000; 
	public static void solve(int a[], int n, int k,
							int index, int sum, int maxsum)
	{
		// K=1 is the base Case
		if (k == 1) {
			maxsum = Math.max(maxsum, sum);
			sum = 0;
			for (int i = index; i < n; i++) {
				sum += a[i];
			}
			// we update maxsum
			maxsum = Math.max(maxsum, sum);
			// the answer is stored in ans
			ans = Math.min(ans, maxsum);
			return;
		}
		sum = 0;
		// using for loop to divide the array into
		// K-subarray
		for (int i = index; i < n; i++) {
			sum += a[i];
			// for each subarray we calculate sum ans update
			// maxsum
			maxsum = Math.max(maxsum, sum);
			// calling function again
			solve(a, n, k - 1, i + 1, sum, maxsum);
		}
	}
	public static void main(String[] args)
	{

		
		int k = 3; // K divisions
		int n = 4; // Size of Array
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		k=sc.nextInt();
		int[] arr = new int[n];
		for (int i=0; arr.length-1>i;i++) {
			 arr[i]= sc.nextInt();
		}
		solve(arr, n, k, 0, 0, 0);
		System.out.println(ans + "\n");
	}
}
