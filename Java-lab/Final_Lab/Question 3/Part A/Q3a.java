import java.util.Scanner;

@SuppressWarnings("serial")
class NameException extends Exception {
}

@SuppressWarnings("serial")
class AgeException extends Exception {
}
class Employee {
	int age;
	String name;

	Employee(int age,String name) {
		this.age=age;
		this.name=name;
	}

	public String toString() {
		return ("Name: "+name+"\nAge: "+age);
	}
}
public class Q3a {
	@SuppressWarnings({ "resource", "unused" })
	public static void main(String args[]) 
	{
		Scanner sc = new Scanner(System.in);
		boolean ex = false;
		boolean flag=false;
		System.out.println("Enter your age: ");  
		int age = sc.nextInt();
		sc.nextLine();
		System.out.println("Enter your name: ");  
		String name = sc.nextLine();
		try {
			if(age>50) {
				throw new AgeException();
			}
			System.out.println("Age is valid");
		}
		catch(AgeException e) {
			System.out.println("Age Exception");
			flag = true;
		}
		try {
			int nm = Integer.parseInt(name);
			ex = true;
			if (ex) {
				throw new NameException();
			}
		}
		catch(NameException e) {
			System.out.println("Name Exception");
		}
		catch(Exception e) {
			System.out.println("Name is valid");
		}
		if(!flag && !ex) {
			Employee e = new Employee(age,name);
			System.out.println(e);
		}
	}
}