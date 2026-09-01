public class String_Example {
  public static void main(String[] args) {
    String s = new String("     Hello World");
    System.out.println("String: " + s);
    System.out.println("Length: " + s.length());
    System.out.println("Trim: " + s.trim());
    System.out.println("Replace: " + s.replace('o', 'p'));
    System.out.println("Contains: " + s.contains("Hell"));
    System.out.println("Equals: " + s.equals("Hello World"));
  }
}