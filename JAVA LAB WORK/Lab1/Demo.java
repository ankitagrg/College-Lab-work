package Lab1;

import java.util.Scanner;

public class Demo { 
        public static void main( String args[] ) {
           try (Scanner myInput = new Scanner( System.in )) {
            int a;
               int b;
               int sum;
               System.out.print( "Enter first integer: " );
               a = myInput.nextInt();
               System.out.print( "Enter second integer: " );
               b = myInput.nextInt();
               sum = a + b;
               System.out.printf( "Sum = %d", sum );
        }
        }
     }
    

     
