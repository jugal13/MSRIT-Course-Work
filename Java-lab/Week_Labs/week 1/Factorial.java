import java.util.Scanner;

public class Factorial {
  public static void main(String args[]) {
    Scanner in = new Scanner(System.in);
    int n = in .nextInt();
    System.out.println("The factorial of " + n + " is " + findFactorial(n));
  }

  public static long findFactorial(int n) {
    int fact = 1;
    for (int i = n; i > 0; i--) {
      fact *= i;
    }
    return fact;
  }

}