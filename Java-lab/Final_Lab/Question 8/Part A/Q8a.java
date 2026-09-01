class wait_eat
{
	int n;
	boolean value=false;

	synchronized public int eat() {
		while(!value) {
			try {
				wait();
			}
			catch(Exception e) {
				e.printStackTrace();
			}

		}
		System.out.println("Got Meal number: "+n);
		value = false;
		notify();
		return n;
	}

	synchronized public void put(int n) {
		while(value) {
			try {
				wait();
			}
			catch(Exception e) {
				System.out.println(e);
			}
		}
		this.n= n;
		System.out.println("Put Meal number: "+n);
		value = true;
		notify();
	}
}

class thread1 extends Thread
{
	wait_eat p;
	thread1(wait_eat m) {
		p=m;
		this.start();
	}
	public void run() {
		int i=0;
		while(true) {
			p.put(i++);
			try {
				sleep(1000);
			} 
			catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}


class thread2 extends Thread
{
	wait_eat p;
	thread2(wait_eat m) {
		p=m;
		this.start();
	}
	public void run() {
		while(true) {
			p.eat();
			try {
				sleep(1000);
			}
			catch (InterruptedException e) {
				e.printStackTrace();
			}
		}	
	}
}

public class Q8a {
	public static void main(String args[]){
		wait_eat p = new wait_eat();
		new thread1(p);
		new thread2(p);
	}
}