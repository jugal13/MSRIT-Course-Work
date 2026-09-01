import java.util.Scanner;

public class Fibonacci {
  public static void main(String args[]) {
    Scanner in = new Scanner(System.in);
    int n = in .nextInt();
    displayFibonacci(n);
  }

  static void displayFibonacci(int n) {
    int f = 0, s = 1, t;
    for (int i = 0; i<n; i++) {
      System.out.print(f + " ");
      t = f + s;
      f = s;
      s = t;
    }
  }
}