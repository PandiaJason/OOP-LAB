
import java.util.Scanner;

public class SecondLargestNumber {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter the number of elements in the array:");
        int n = scanner.nextInt();
        int[] array = new int[n];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }
        int secondLargest = findSecondLargest(array);
        System.out.println("The second largest number is: " + secondLargest);
        
        scanner.close();
    }
    
    public static int findSecondLargest(int[] array) {
        if (array.length < 2) {
            throw new IllegalArgumentException("Array must have at least two elements.");
        }
        int firstLargest = 0;
        int secondLargest = 0;
        for (int num : array) {
            if (num > firstLargest) {
                // This finds the first largest and second largest
                secondLargest = firstLargest;
                firstLargest = num;
                System.out.println("if");
            } else if (num > secondLargest && num != firstLargest) {
                // This finds the secondLargest in some cases
                secondLargest = num;
                System.out.println("else");

            }
        }
        return secondLargest;
    }
}

