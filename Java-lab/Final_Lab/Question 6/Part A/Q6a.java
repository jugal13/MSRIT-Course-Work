import java.util.Scanner;

@SuppressWarnings("serial")
class LowCgpaException extends Exception {
}

@SuppressWarnings("serial")
class AgeOutOfRangeException extends Exception {
}

public class Q6a {
	@SuppressWarnings("resource")
	public static void main(String args[]) {
		
		Scanner in = new Scanner(System.in);
		boolean flag = true;
		System.out.println("Enter your Age:");
		int age = in.nextInt();
		System.out.println("Enter CGPA: ");
		double cgpa = in.nextDouble();
		try {
			if (age>25) {
				throw new AgeOutOfRangeException();
			}
			else {
				try {
					if (cgpa<8) {
						throw new LowCgpaException();
					}	
				}
				catch(LowCgpaException e) {
					System.out.println("Low Cgpa Exception");
					flag = false;
				}
			}
		}
		catch(AgeOutOfRangeException e) {
			System.out.println("Age Out Of Range Exception");
			flag = false;
		}
		finally {
			if (flag) {
				System.out.println("Your application is accepted and is under study");
			}
		}
	}
}