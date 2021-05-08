import java.util.Scanner;

public class Make_It_One {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        long n=s.nextLong();
        long i=0;
        while (n!=1){
            if(isPowerOfTwo(n))
            {
                n=n/2;
            }
            else {
                long k=findPreviousPowerOf2(n);
                n=n-k;
            }
            i++;
        }
        System.out.println(i);
    }
    static boolean isPowerOfTwo(long n)
    {
        if (n == 0)
            return false;

        while (n != 1)
        {
            if (n % 2 != 0)
                return false;
            n = n / 2;
        }
        return true;
    }
    public static long findPreviousPowerOf2(long n)
    {
        while ((n & n - 1) != 0) {
            n = n & n - 1;
        }
        return n;
    }
}
