/**
 * Main class for the Java application.
 * 
 * @author Your Name
 * @version 1.0
 * @since 2023-10-05
 */
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        System.out.println("---- Maintenant je vais voir pour les calcules classiques +-*/ ----");
        int a = 5;
        int b = 3;
        int c = a + b;
        System.out.println(String.valueOf(a) + " + " + String.valueOf(b) + " = " + c);
        c = a - b;
        System.out.println(String.valueOf(a) + " - " + String.valueOf(b) + " = " + c);
        c = a * b;
        System.out.println(String.valueOf(a) + " * " + String.valueOf(b) + " = " + c);
        c = a / b;
        System.out.println(String.valueOf(a) + " / " + String.valueOf(b) + " = " + c);

    }
}