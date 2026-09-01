package AdvMath;

public class Trig {
	
	double x,total;

	public void cal(double m) {
		x = Math.toRadians(m);
		total = Math.sin(x)+ Math.cos(x)+ Math.tan(x);
	}
	public void display() {
		System.out.println("sinx + cosx + tanx = " + total);
	}
}