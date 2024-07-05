package Lab2;

public class Rectangle {
    int length;
    int breadth;

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Copy constructor //
    Rectangle(Rectangle obj) {
        System.out.println("Copy Constructor");
        length = obj.length;
        breadth = obj.breadth;
    }

    // Calcuate area of rectangle //
    int area() {
        return (length * breadth);
    }
}

class CopyConstructor {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle(5, 6);
        Rectangle r2 = new Rectangle(r1);
        System.out.println("Area  of Rectangle : " + r1.area());
        System.out.println("Area of another Rectangle : " +r2.area());
    }
}
