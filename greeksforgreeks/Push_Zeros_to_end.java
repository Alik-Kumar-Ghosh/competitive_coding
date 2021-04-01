import java.util.Scanner;

public class Push_Zeros_to_end {
    public static void main(String[] args){
        //Your code goes here
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t>0){
            int n = s.nextInt();
            int arr[] = new int[n];
            for(int i=0;i<n;i++){
                arr[i]= s.nextInt();
            }
            for (int i = 0; i <n ; i++) {
                for (int j=i+1;j<n;j++)
                    if(arr[i]==0){
                        int temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                    else{
                        continue;
                    }
            }
            for (int i = 0; i <n ; i++) {
                System.out.print(arr[i]);
            }
            t--;
        }
    }
}
