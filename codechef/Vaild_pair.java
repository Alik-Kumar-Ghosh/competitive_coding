import java.util.Scanner;

public class Vaild_pair {
    public static void main(String[] agrs){
        Scanner s = new Scanner(System.in);
        int a,b,c;
        a=s.nextInt();
        b=s.nextInt();
        c=s.nextInt();
        if((a==b||a==c)||(b==a||b==c)||(c==a||c==b)){
            System.out.println("YES");
        }
        else
            System.out.println("NO");
    }
}
