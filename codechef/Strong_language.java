import java.util.Scanner;

public class Strong_language {
    public static void main(String[] args){
        Scanner s= new Scanner(System.in);
        int t=s.nextInt();
        while (t>0){
            int n,k,ans=0,l=0;
            n= s.nextInt();
            k= s.nextInt();
            String str = s.next();
            for (int i = 0; i < n; i++) {
                if(str.charAt(i)=='*'){
                    ans++;
                    if(ans==k){
                        System.out.println("YES");
                        l++;
                        break;
                    }
                }
                else
                    ans=0;
            }
            if(l==0)
                System.out.println("NO");
            t--;
        }
    }
}
