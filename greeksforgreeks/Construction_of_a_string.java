import java.util.Scanner;

public class Construction_of_a_string {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k= s.nextInt();
        StringBuilder str = new StringBuilder();
        char arr[]={'a','e','i','o','u'};
        char cons='g';
        for (int i = 0,h=0; i < n; i++,h++) {
            if(i%2==0)
                str.append(cons);
            else
                str.append(arr[h]);
            if(h==4)
                h=0;
        }
        System.out.println(str);
    }
}
