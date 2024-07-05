package Lab3;

class vehicle {
    protected String make;
    protected String model;
    protected int year;

    vehicle(String model, String make) {
        this.model = model;
        this.make = make;
    }

    public void start() {
        System.out.println("Vehicle is starting");
    }

    public void stop() {
        System.out.println("Vehicle is stoping");
    }

    public void display() {
        System.out.println("Make: " + this.make);
        System.out.println("Model: " + this.model);
        System.out.println("Year: " + this.year);
    }

}

class Car extends vehicle {
    private int numberOfDoors;

    Car(String model, String make, int numberOfDoors) {
        super(model, make);
        this.numberOfDoors = numberOfDoors;
    }

    @Override
    public void start() {
        System.out.println("Car is starting.");
    }

    @Override
    public void stop() {
        System.out.println("Car is stoping");
    }

    @Override
    public void display() {
        System.out.println("Make: " + this.make);
        System.out.println("Model: " + this.model);
        System.out.println("Year: " + this.year);
        System.out.println("Number of doors: " + this.numberOfDoors);
    }

    public void drift() {
        System.out.println("Car is drifting.");
    }

}

class Motorcycle extends vehicle {
    private boolean hasFairing;

    Motorcycle(String model, String make, boolean hasFairing) {
        super(model, make);
        this.hasFairing = hasFairing;
    }

    @Override
    public void start() {
        System.out.println("Motorcycle is starting.");
    }

    @Override
    public void stop() {
        System.out.println("Motorcycle is stopping.");

    }

    public void wheelie() {
        System.out.println("Motorcycle is doing a wheelie.");

    }

    public void display() {
        System.out.print("This is a ");
        if (hasFairing) {
            System.out.println("fairings motorcycle.");
        } else {
            System.out.println("motorcycle without fairings.");
        }
    }

    public class V {
        public static void main(String[] args) {
            vehicle v = new vehicle("bus", "car");
            Car mycar = new Car("b", "c", 4);
            Motorcycle mymotor = new Motorcycle("bike", "bii", true);
            v.start();
            v.stop();
            v.display();
            mycar.start();
            mycar.stop();
            mycar.display();
            mymotor.start();
            mymotor.wheelie();

            mymotor.stop();
            mymotor.display();

        }
    }
}
