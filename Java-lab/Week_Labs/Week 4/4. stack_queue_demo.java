import java.util.*;

interface DataStructure {
  public void push(int);
  public int pop();
  public boolean isempty();
  public boolean isfull();
}

class Stack implements DataStructure {
  int array[];
  int Stacktop;
  int n;
  Stack(int n) {
    array = new int[n];
    Stacktop = -1;
    this.n = n;
  }
  public void push(int ele) {
    if (isfull()) {
      System.out.println("Stack IS FULL");
    } else {
      array[++Stacktop] = ele;
    }
  }
  public int pop() {
    if (isempty()) {
      return -1;
    }
    return array[Stacktop--];
  }
  public boolean isempty() {
    if (Stacktop == -1) {
      return true;
    }
    return false;
  }
  public boolean isfull() {
    if (Stacktop >= n - 1) {
      return true;
    }
    return false;
  }
}
class Queue implements DataStructure {
  int array[];
  int front, rear;
  int n;
  Queue(int n) {
    array = new int[n];
    front = -1;
    rear = -1;
    this.n = n;
  }
  public void push(int ele) {
    if (isfull()) {
      System.out.println("Queue IS FULL");
    } else {
      array[++rear] = ele;
    }
  }
  public int pop() {
    if (isempty()) {
      return -1;
    }
    return array[++front];
  }
  public boolean isempty() {
    if (rear == -1) {
      return true;
    }
    return false;
  }
  public boolean isfull() {
    if (rear >= n - 1) {
      return true;
    }
    return false;
  }
}
class Demo {
  public static void main(String args[]) {
    int choice;
    Scanner input = new Scanner(System.in);
    System.out.println("1:Stack 2:Queue\n enter choice:");
    choice = input.nextInt();
    switch (choice) {
      case 1:
        System.out.println("Enter the size of Stack");
        int n = input.nextInt();
        Stack s = new Stack(n);
        while (true) {
          System.out.println("1:push,2:pop,3:exit Enter choice: ");
          choice = input.nextInt();
          switch (choice) {
            case 1:
              System.out.println("Enter element");
              int ele = input.nextInt();
              s.push(ele);
              break;
            case 2:
              s.pop();
              break;
            case 3:
              System.exit(0);
          }
        }
      case 2:
        System.out.println("Enter the size of Queue");
        int m = input.nextInt();
        Queue q = new Queue(m);
        while (true) {
          System.out.println("1:push,2:pop,3:exit Enter choice: ");
          choice = input.nextInt();
          switch (choice) {
            case 1:
              System.out.println("Enter element");
              int ele = input.nextInt();
              q.push(ele);
              break;
            case 2:
              q.pop();
              break;
            case 3:
              System.exit(0);
          }
        }
    }
  }
}