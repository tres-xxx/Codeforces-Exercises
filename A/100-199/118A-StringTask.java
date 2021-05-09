import java.util.*;
import java.io.*;

public class task{
  public static void main(String args[]) throws IOException {
    InputStreamReader in = new InputStreamReader(System.in);
    BufferedReader br = new BufferedReader(in);
    String s = br.readLine();
    s = s.toLowerCase();
    s = s.replace('a','*');
    s = s.replace('e','*');
    s = s.replace('i','*');
    s = s.replace('o', '*');
    s = s.replace('u','*');
    s = s.replace('y','*');
    
    int i = 0;
    while(i<s.length()){
        
        if(s.charAt(i) != '*'){
            System.out.print(".");
            System.out.print(s.charAt(i));
        }
        i++;
    }
    
  }
}
