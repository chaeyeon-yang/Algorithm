import java.util.*;

public class LinearSelection {
	static int cnt; // swap 교환횟수 
	
	public static int partition(int a[], int start, int end, int K) {
		int pivot = a[end];
		int i = start-1;
		
		for(int j=0; j<end; j++) {
			if(a[j] <= pivot) {
				i++;
				swap(a, i , j, K);
			}
		}
		swap(a, i+1, end, K);
		return i+1;
	}
	
	public static int select(int a[], int start, int N, int Q, int K) {
		int end = N-1;
		if(start == end) return a[start];
		int pivot = partition(a, start, end, K);
		int k = pivot - start + 1;
		
		if(Q < k) return select(a, start, pivot-1, Q, K);
		else if(Q == k) return a[pivot];
		else return select(a, pivot+1, end, Q-k, K);
	}
	
	private static void swap(int[] a, int p, int q, int K) {
		cnt += 1;
        int temp = a[p];
        a[p] = a[q];
        a[q] = temp;

        if (cnt == K) { System.out.println(a[p]+" "+a[q]); }
    }

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		int Q = s.nextInt();
		int K = s.nextInt();
		int start = 0;
		
		int a[] = new int[N];
		for(int i=0; i<N; i++) {
			a[i] = s.nextInt();
		}
		
		select(a, start, N, Q, K);
		if (cnt < K) { System.out.println("-1"); }
	}
}