package staff;

public class staff_details {

	String Staffid, StaffName, Designation, subjects;
	
	public staff_details(String i,String n,String d,String s) {
		Staffid=i;
		StaffName=n;
		Designation=d;
		subjects=s;
	}
	
	public void display() {
		System.out.println("\n Staffid:  "+Staffid+"\n StaffName: "+StaffName+"\n Designation: "+ Designation +"\n Subject handled: "+subjects);
	}

}