
import java.util.Arrays;
import java.util.Scanner;

public class _6_union_of_2_array {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();int m = s.nextInt();
        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = s.nextInt();
        }

        int b[] = new int[m];
        for (int i = 0; i < m; i++) {
            b[i] = s.nextInt();
        }
        int count=0;
        int arr[]=new int [n+m];
        for (int i = 0; i <n ; i++) {
            arr[i]=a[i];
        }
        for (int i = n,j=0; i < n+m; i++,j++) {
            arr[i]=b[j];
        }
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {
                if(arr[i]>arr[j])
                    count++;
                else if (arr[i]<arr[j])
                    count++;
            }

        }
        System.out.println(count);
    }
}
