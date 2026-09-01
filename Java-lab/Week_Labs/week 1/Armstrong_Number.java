import java.util.Scanner;

public class Armstrong_Number {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("enter number: ");
    int number = in .nextInt();
    if (checkArmstrongNumber(number)) {
      System.out.println(number + " is an Armstrong number");
    } else {
      System.out.println(number + " is not an Armstrong number");
    }
  }

  static boolean checkArmstrongNumber(int num) {
    int sum = 0, dig, temp = num;
    while (temp != 0) {
      dig = temp % 10;
      sum += dig * dig * dig;
      temp /= 10;
    }
    return sum == num;
  }
}