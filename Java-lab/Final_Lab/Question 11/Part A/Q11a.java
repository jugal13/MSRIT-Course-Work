import java.util.Scanner;

public class Q11a {
	
	@SuppressWarnings("resource")
	public static void main(String args[]) {
		
		int count = 0;

		System.out.println("Enter your string:"); 
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();

		s=s.toUpperCase();
		s=s.replaceAll(" ", "");

		for(int i=0;i<s.length()-1;i++) 
			if(s.charAt(i) == s.charAt(i+1))
				count+=1;
		
		System.out.println(count);

	}
}