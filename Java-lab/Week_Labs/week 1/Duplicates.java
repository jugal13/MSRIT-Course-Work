import java.util.Scanner;

class Duplicates {
  public static void main(String args[]) {
    Scanner in = new Scanner(System.in);
    int max = Integer.MIN_VALUE;
    System.out.println("Enter the number of elements: ");
    int n = in .nextInt();
    int arr[] = new int[n];
    System.out.println("Enter the array elements: ");
    for (int i = 0; i<n; i++) {
      arr[i] = in .nextInt();
      if (arr[i] > max) {
        max = arr[i];
      }
    }
    int count[] = new int[max];
    for (int i = 0; i<n; i++) {
      count[arr[i]]++;
    }
    for (int i = 0; i<n; i++) {
      if (count[i] > 0) {
        System.out.println("Element: " + i + " occurs: " + count[i] + "times");
      }
    }
  }
}