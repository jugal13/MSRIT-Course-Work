package student;


public class student_details 
{
	String USN, Dept_name, g1,g2,g3;
	double sgpa;
	
	public student_details(String u,String d,String gr1,String gr2,String gr3,double sg) {
		USN=u;
		Dept_name=d;
		g1=gr1;
		g2=gr2;
		g3=gr3;
		sgpa=sg;
	}
	
	public void display() {
		System.out.println(" USN: "+ USN+"\n Department name:"+ Dept_name + "\n Grade 1: "+g1+"\n Grade 2: "+g2+"\n Grade 3: "+g3+"\n SGPA: "+sgpa);
	}

}