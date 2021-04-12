import java.util.Scanner;

public class World_Record {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int t= s.nextInt();
        while(t>0){
            float a,b,c,d,ans,sol;
            a= s.nextFloat();
            b= s.nextFloat();
            c= s.nextFloat();
            d= s.nextFloat();
            ans=a*b*c*d;
            sol=100/ans;
            double roundOff = (double) Math.round(sol * 100) / 100;
            if(roundOff<9.58)
                System.out.println("YES");
            else
                System.out.println("NO");
            t--;
        }
    }
}
