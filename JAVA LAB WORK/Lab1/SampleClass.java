package Lab1;

class Class {
    static int count = 1;
    float data;

    public Class() {
        count = count + 1;
        System.out.println("number:" + count);
    }
}

public class SampleClass {
    private static Object count;
    private Object data;

    public static void main(String[] args) {
        SampleClass s1 = new SampleClass();
        s1.data = SampleClass.count;
        SampleClass s2 = new SampleClass();
        s2.data = SampleClass.count;
        System.out.println("Final Data:" + s2.data + "" + s1.data);
    }
}
