# 1. Handling Arithmetic Exception (Division by Zero)

## Aim: 
To demonstrate exception handling in Java by catching an ArithmeticException (division by zero).

## Algorithm:

-	1.	Start.
-	2.	Initialize two integers, a and b.
-	3.	Try to divide a by b.
-	4.	If b is zero, catch the ArithmeticException and display an error message.
-	5.	End.

## Program:
```java
public class ArithmeticExceptionExample {
    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        try {
            int result = a / b; // This will throw ArithmeticException
        } catch (ArithmeticException e) {
            System.out.println("Error: Cannot divide by zero.");
        }
    }
}
```

# 2. Handling FileNotFoundException with Finally Block

## Aim: To demonstrate exception handling with FileNotFoundException and ensure file closing using a finally block.

## Algorithm:

-	1.	Start.
-	2.	Open a file using FileInputStream.
-	3.	Try to read data from the file.
-	4.	If the file is not found, catch FileNotFoundException and print an error message.
-	5.	Use finally to close the file.
-	6.	End.

## Program:

```java
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class FileNotFoundExceptionExample {
    public static void main(String[] args) {
        FileInputStream fis = null;
        try {
            fis = new FileInputStream("example.txt");
            int data = fis.read();
            System.out.println("Data read from file: " + data);
        } catch (FileNotFoundException e) {
            System.out.println("Error: File not found.");
        } catch (IOException e) {
            System.out.println("Error: Cannot read file.");
        } finally {
            try {
                if (fis != null) {
                    fis.close();
                    System.out.println("File closed.");
                }
            } catch (IOException e) {
                System.out.println("Error: Cannot close file.");
            }
        }
    }
}
```

# 3. Custom Exception (Age Validation)

## Aim: To demonstrate creating and throwing a custom exception for age validation.

## Algorithm:

-	1.	Start.
-	2.	Define a custom AgeException class that extends Exception.
-	3.	In the main class, create a checkAge method that throws AgeException if age is below 18.
-	4.	In the main method, call checkAge and catch the AgeException.
-	5.	Display an error message if an exception occurs.
-	6.	End.

# Program:

```java
class AgeException extends Exception {
    public AgeException(String message) {
        super(message);
    }
}

public class CustomExceptionExample {
    public static void main(String[] args) {
        try {
            checkAge(15); // This will throw an AgeException
        } catch (AgeException e) {
            System.out.println("Caught exception: " + e.getMessage());
        }
    }

    public static void checkAge(int age) throws AgeException {
        if (age < 18) {
            throw new AgeException("Age must be 18 or older.");
        }
        System.out.println("Age is valid.");
    }
}
```

## 4. Multiple Catch Blocks

## Aim: To demonstrate handling multiple exceptions in a single try block using multiple catch statements.

## Algorithm:

-	1.	Start.
-	2.	Define an integer array.
-	3.	Try to access an element beyond the array’s size to throw ArrayIndexOutOfBoundsException.
-	4.	Try a division by zero operation to throw ArithmeticException.
-	5.	Use multiple catch blocks to handle each exception individually.
-	6.	End.

## Program:
```java
public class MultipleCatchExample {
    public static void main(String[] args) {
        try {
            int[] numbers = {1, 2, 3};
            System.out.println(numbers[5]); // This will throw ArrayIndexOutOfBoundsException
            int result = 10 / 0; // This line will not execute
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: Array index out of bounds.");
        } catch (ArithmeticException e) {
            System.out.println("Error: Cannot divide by zero.");
        } catch (Exception e) {
            System.out.println("An unexpected error occurred.");
        }
    }
}
```
