import java.util.Scanner;

import AdvMath.*;

public class Q10a {
	@SuppressWarnings("resource")
	public static void main(String args[]) {
		
		Trig t=new Trig();
		Scanner in = new Scanner(System.in);
		
		System.out.println("Enter Value for x:");
		double x = in.nextDouble();
		t.cal(x);
		t.display();

		Pythagorean pt = new Pythagorean();
		System.out.println("Enter Limit for triplets:");
		int limit = in.nextInt();
		pt.triplets(limit);
	}
}