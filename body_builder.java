import java.util.Scanner;

public class body_builder {
    public static void main(String[] args){
        Scanner s= new Scanner(System.in);
        int t = s.nextInt();
        while (t-->0){
            long  n= s.nextLong();
            long r=s.nextLong();
            long a[]=new long [(int) n];
            for(int i=0;i<n;i++)
                a[i]=s.nextLong();
            long b[]=new long[(int) n];
            for(int i=0;i<n;i++)
                b[i]=s.nextLong();
            long mx = b[0], tmp = b[0];
            long z = 0;
            for(int i = 1;i<n;i++){
                long  x = (int) (a[i] - a[i-1]);
                tmp = Math.max(z,tmp - r*x);
                tmp += b[i];
                mx = Math.max(mx,tmp);
            }
            System.out.println(mx);
        }
    }
}
