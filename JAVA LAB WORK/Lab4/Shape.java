package Lab4;

abstract class Shape1 {
    protected String name;
    protected String color;

    public Shape1(String name, String color) {
        this.name = name;
        this.color = color;
    }

    public abstract double calculateArea();

    public String getName() {
        return name;
    }

    public String getColor() {
        return color;
    }

    public void displayinfo() {
        System.out.println("Shape is " + name + " color is " + color);
    }
}

class Circle extends Shape1 {
    private double radius;

    public Circle(String name, String color, double radius) {
        super(name, color);
        this.radius = radius;
    }

    @Override
    public double calculateArea() {
        return Math.PI * radius * radius;
    }
}

class Rectangle extends Shape1 {
    private double length;
    private double width;

    public Rectangle(String name, String color, double length, double width) {
        super(name, color);
        this.length = length;
        this.width = width;
    }

    @Override
    public double calculateArea() {
        return length * width;
    }
}

class Shape {
    public static void main(String args[]) {
        Circle circle = new Circle("Circle", "Red", 4.0);
        double circleArea = circle.calculateArea();
        System.out.println("Area of the circle: " + circleArea);
        circle.displayinfo();

        Rectangle rectangle = new Rectangle("Rectangle", "Blue", 4.0, 6.0);
        double rectangleArea = rectangle.calculateArea();
        System.out.println("Area of the rectangle: " + rectangleArea);
        rectangle.displayinfo();
    }
}
