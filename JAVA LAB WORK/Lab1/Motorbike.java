package Lab1;

public class Motorbike {
    int speed;
    String model;
    public Motorbike(String model){
        this.model=model;
    }
    public void accelerate(){
        speed=speed+1;
    }
    public void stop(){
        speed=0;
    }
    public void printSpeed(){
        System.out.println("The current speed of"+model+"is"+speed+"mpH");
    }
    public static void main(String[] args) {
        Motorbike honda=new Motorbike("Honda");
        Motorbike Yahama=new Motorbike("Yahama");
        honda.printSpeed();
        honda.accelerate();
        honda.accelerate();
        Yahama.accelerate();
        honda.printSpeed();
        Yahama.printSpeed();
        honda.stop();
        honda.printSpeed();
    }
}
