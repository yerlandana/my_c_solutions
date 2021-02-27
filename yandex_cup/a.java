import java.util.Scanner;
public class a{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int[] m = new int[10];
        
        for(int i = 0; i < 10; i++){
            int k = s.nextInt();
            m[i] = k;
        }
        int num = s.nextInt();
        String[] lo = new String[num];
        for(int i = 0; i < num; i++){
            int y = 0;
            for(int j = 0; j < 6; j++){
                int t=  s.nextInt();
                for(int o = 0; o < 10; o++){
                    if(m[o] == t){
                        y++;
                    }
                }
            }
            if(y >= 3){
                lo[i] = "Lucky";
             }else{
                lo[i] = "Unlucky";
             }
        }
        for(int i= 0; i < num; i++){
            System.out.println(lo[i]);
        }
    }
}