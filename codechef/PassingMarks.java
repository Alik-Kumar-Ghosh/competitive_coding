import java.util.Scanner;

public class PassingMarks {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t>0){
            int am= s.nextInt();
            int bm=s.nextInt();
            int cm=s.nextInt();
            int min=s.nextInt();
            int a= s.nextInt();
            int b=s.nextInt();
            int c=s.nextInt();
            if((am>a)||(bm>b)||(cm>c)){
                System.out.println("NO");
            }
            else {
                int ans = a+b+c;
                if(ans>=min) {
                    System.out.println("YES");
                }
                else
                    System.out.println("NO");
            }
        t--;
        }

    }
}
