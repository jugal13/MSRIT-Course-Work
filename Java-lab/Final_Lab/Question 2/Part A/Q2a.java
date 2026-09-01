import java.util.Scanner;
import staff.*;
import student.*;

public class Q2a
{
	public static void main(String []args) 
	{
		@SuppressWarnings("resource")
		Scanner in = new Scanner(System.in);
		
		System.out.println("Enter USN: ");
		String usn = in.nextLine();
		System.out.println("Enter dept: ");
		String dept = in.nextLine();
		System.out.println("Enter grade: ");
		String g1 = in.nextLine();
		System.out.println("Enter grade: ");
		String g2 = in.nextLine();
		System.out.println("Enter grade: ");
		String g3 = in.nextLine();
		System.out.println("Enter sqpa: ");
		double sgpa = in.nextDouble();
		student_details s1 = new student_details(usn,dept,g1,g2,g3,sgpa);
		
		in.nextLine();
		System.out.println("Enter Staff_ID: ");
		String id = in.nextLine();
		System.out.println("Enter Name: ");
		String name = in.nextLine();
		System.out.println("Enter designation: ");
		String desg = in.nextLine();
		System.out.println("Enter subject: ");
		String sub = in.nextLine();
		staff_details s2 = new staff_details(id,name,desg,sub);
		
		s1.display();
		s2.display();
	}
}