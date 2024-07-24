
import java.util.Scanner;

public class CheckPrime {

    public static void main(String[] args) {
        // Create a Scanner object to read input
        Scanner scanner = new Scanner(System.in);
        
        // Prompt user to enter a number to check if it is prime
        System.out.println("Enter a number to check if it is prime:");
        int number = scanner.nextInt(); // Read the number
        
        // Call the method to check if the number is prime and store the result
        boolean isPrime = isPrime(number);
        
        // Print the result
        if (isPrime) {
            System.out.println(number + " is a prime number.");
        } else {
            System.out.println(number + " is not a prime number.");
        }
        
        // Close the scanner to avoid resource leaks
        scanner.close();
    }
    
    public static boolean isPrime(int num) {
        // Handle edge cases for numbers less than or equal to 1
        if (num <= 1) {
            return false;
        }
        
        // Check for factors from 2 to the square root of the number
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false; // If a factor is found, the number is not prime
            }
        }
        
        return true; // If no factors are found, the number is prime
    }
}
