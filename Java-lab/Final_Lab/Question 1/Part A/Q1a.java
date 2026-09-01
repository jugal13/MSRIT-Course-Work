import java.util.Scanner;

interface student {
	String getValue();
}

interface department {
	float getattendance();
}

interface exam extends student,department {
	float calattendance();
	boolean eligible();	
}

class check implements exam{
	
	int sno;
	String sname;
	String class;
	float attendance;
	float perc;
	
	public check(int s, String name, String c, float a) {
		sno=s;
		sname=name;
		class=c;
		attendance=a;
	}
	
	@Override
	public String getValue() {
		return ("\nStudent Number: " +sno +"\nStudent Name: " +sname +"\nClass: " +class +"\nAttendace: " +attendance + "\nAttendace Percentage: "+perc );
	}

	@Override
	public float getattendance() {
		return perc;
	}

	@Override
	public float calattendance() {
		perc = (attendance/54)*100;
		return perc;
	}

	@Override
	public boolean eligible() {
		if (perc>=85) {
			return true;
		}
		else {
			return false;
		}
	}
	
}
public class Q1a {
	
	@SuppressWarnings("resource")
	public static void main(String [] args) {
		
		Scanner in = new Scanner(System.in);
		System.out.print("Enter ID:");
		int id= in.nextInt();
		in.nextLine();
		System.out.print("Enter name:");
		String name= in.nextLine();
		System.out.print("Enter class:");
		String cl= in.nextLine();
		System.out.print("Enter attendance:");
		int att= in.nextInt();
		in.nextLine();
		check s1 = new check(id,name,cl,att);
		s1.calattendance();
		if(s1.eligible()) {
			System.out.print("Eligible!");
			System.out.println(s1.getValue());
		}
		else {
			System.out.print("Not eligible!");
			System.out.println(s1.getValue());
			
		}
	}
}