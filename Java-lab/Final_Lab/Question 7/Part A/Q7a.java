import java.util.Scanner;

class Record
{
	String[] name= new String[50];
	int[] rank= new int[50];
	
	Record() {
		System.out.println("Constructor call ");
	}
	
	@SuppressWarnings("resource")
	void readValues() {
		
		for(int i=0;i<10;i++) {
			Scanner in = new Scanner(System.in);  
			System.out.println("Enter your name: ");  
			name[i]=in.next();  
			System.out.println("Enter your rank: ");  
			rank[i]=in.nextInt();
		}
	}
	
	void display() {
		
		for(int i=0;i<10;i++) {
			System.out.println("\n Name: " + name[i] + " Rank: " + rank[i]);  
		}
	}
}

class Rank extends Record {
	
	int index;
	
	Rank() {
		super();
		index=0;
	}
	
	void highest()
	{
		int max = Integer.MAX_VALUE;
		for(int i = 0; i < 10; i++) {
			if(max >= rank[i]) {
				index = i;
				max = rank[i];
			}
		}
	}
	
	
	void display() {
		super.display();
		System.out.println("\n\n Top most rank is : " +name[index] + "\n Rank is " + rank[index] );
	
	}
}

public class Q7a  {
	
	public static void main(String args[]) {
	
		Rank r = new Rank();
		r.readValues();
		r.highest();
		r.display();

	}
}