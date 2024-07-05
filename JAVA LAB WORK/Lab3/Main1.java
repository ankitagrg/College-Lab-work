package Lab3;

class Shape {
    // Final method //
    public final void draw() {
        System.out.println("Square in shape");
    }
}

class Square extends Shape {


}

public class Main1 {
    public static void main(String[] args) {
        Square mySquare = new Square();
        mySquare.draw();
    }
}
