import java.io.*;
import java.util.*;
public class c {
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    Set<Integer> ps = new HashSet<Integer>();
    List<Integer> cl = new ArrayList<Integer>();
    //int t = in.nextInt();
    int n = in.nextInt();
    int p[] =new int[n]; 
    int c[] =new int[n];
    int count=0;
    for(int i=0;i<n;i++)
      p[i] = in.nextInt();
    for(int k=0;k<n;k++){
      c[k] = in.nextInt();
    }
    for(int j=0;j<p.length;j++){
      ps.add(p[j]);
      cl.add(c[j]);
    }
    // remove entries in cl that do not exist in ps
    cl.retainAll(ps);
    count = cl.size();
    System.out.println(count);
  }
}