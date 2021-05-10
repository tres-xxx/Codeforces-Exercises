import java.util.Scanner;
import java.lang.*;

public class Test{
	public static void main(String args [] ){
		Scanner scann = new Scanner(System.in);
		StringBuilder word = new StringBuilder(scann.nextLine());
		System.out.print("\n");
		for( int i = 0; i < word.length(); i++ ){
			char l = Character.toLowerCase(word.charAt(i));
			if( l != 'a' && l != 'e' && l != 'i' && l != 'o' && l != 'u' && l != 'y' )
				System.out.print( "." + l );
		}		
	}
}
