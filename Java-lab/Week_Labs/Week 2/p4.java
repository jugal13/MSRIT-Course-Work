import java.util.Scanner;

abstract class Shape {
  double dim1, dim2;
  abstract void calculatearea();
  abstract void displaydetails();
}

class Rectangle extends Shape {
  double area;

  Rectangle(double x, double y) {
    dim1 = x;
    dim2 = y;
  }

  void calculatearea() {
    area = dim1 * dim2;
  }
  
  void displaydetails() {
    System.out.println("the dimensions are " + dim1 + dim2 + "area is:" + area);
  }
}

class Triangle extends Shape {
  double area;

  Triangle(double x, double y) {
    dim1 = x;
    dim2 = y;
  }
  
  void calculatearea() {
    area = 0.5 * dim1 * dim2;
  }
  
  void displaydetails() {
    System.out.println("the dimensions are " + dim1 + dim2 + "area is:" + area);
  }
}

class Square extends Shape {
  double area;
  
  Square(double x) {
    dim1 = x;
  }
  
  void calculatearea() {
    area = dim1 * dim1;
  }
  
  void displaydetails() {
    System.out.println("the dimensions are " + dim1 + "area is:" + area);
  }
}

public class p4 {
  public static void main(String args[]) {
    int i;
    Scanner in = new Scanner(System.in);
    double x, y;
    System.out.println("enter the Shape \n 1. Rectangle \n 2. Triangle\n 3. Square \n");
    i = in .nextInt();
    switch (i) {
      case 1:
        System.out.println("enter the dimensions");
        x = in .nextDouble();
        y = in .nextDouble();
        Rectangle obj1 = new Rectangle(x, y);
        obj1.calculatearea();
        obj1.displaydetails();
        break;
      case 2:
        System.out.println("enter the dimensions");
        x = in .nextDouble();
        y = in .nextDouble();
        Triangle obj2 = new Triangle(x, y);
        obj2.calculatearea();
        obj2.displaydetails();
        break;
      case 3:
        System.out.println("enter the dimensions");
        x = in .nextDouble();
        Square obj3 = new Square(x);
        obj3.calculatearea();
        obj3.displaydetails();
        break;
      default:
        System.out.println("unknown operation");
    }
  }
}