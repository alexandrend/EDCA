import java.util.Arrays;
import java.util.Scanner;

public class IntegerSort {

    public static void main(String[] args) { 
        int N = Integer.parseInt(args[0]);
        long start, stop, elapsed;
	Scanner s = new Scanner(System.in);
	
        // initialize and read in data
        start = System.currentTimeMillis();
        int[] a = new int[N];
        for (int i = 0; i < N; i++)
            a[i] = s.nextInt();
        stop = System.currentTimeMillis();
        elapsed = stop - start;
        System.err.println("Input:  " + (elapsed / 1000.0) + " seconds");

        // sort
        start = System.currentTimeMillis();
        Arrays.sort(a, 0, N);
        stop = System.currentTimeMillis();
        elapsed = stop - start;
        System.err.println("Sort:   " + (elapsed / 1000.0) + " seconds");

        // print first 10 values in sorted order
        for (int i = 0; i < N && i < 10; i++)
            System.out.println(a[i]);
        System.out.println("...");
    }

}

