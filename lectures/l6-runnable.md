# Simple Multithreading using the Runnable interface
## Aim:

To create a Java program that demonstrates simple multithreading using the Runnable interface, allowing multiple threads to execute concurrently.

## Algorithm:

-	1.	Start.
-	2.	Create a class that implements the Runnable interface.
-	3.	Define the run() method to specify the behavior of the thread.
-	4.	In the main() method, create multiple Thread objects, passing instances of the Runnable class.
-	5.	Start each thread using the start() method.
-	6.	Each thread executes the run() method concurrently, printing its name and a count from 1 to 5.
-	7.	End.

## Eclipse IDE Steps:

-	1.	Open Eclipse.
-	2.	Create a New Java Project:
- -	•	Go to File > New > Java Project.
-	- •	Enter the project name (e.g., MultiThreadApp).
- -	•	Click Finish.
-	3.	Create a New Java Class:
- - •	Right-click on the src folder.
- -	•	Select New > Class.
- -	•	Enter the class name as MyRunnable.
- -	•	Check the box for public static void main(String[] args).
- -	•	Click Finish.
	4.	Write the Program:
- -	•	Write th provided program into the MyRunnable.java file.
-	5.	Save the File:
- -	•	Save the file by pressing Ctrl + S (or Cmd + S on Mac).
-	6.	Run the Program:
- -	•	Right-click on MyRunnable.java in the Project Explorer.
- -	•	Select Run As > Java Application.
-	7.	Observe the Output:
-  -	•	The console will display the output from both threads printing their names and counting from 1 to 5 concurrently.

## Program:
```java
class MyRunnable implements Runnable {
    private String threadName;

    // Constructor to set the thread name
    public MyRunnable(String name) {
        threadName = name;
    }

    // Implement the run() method to define thread behavior
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(threadName + ": " + i);
            try {
                Thread.sleep(500); // Pause for 500 milliseconds
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }

    public static void main(String[] args) {
        // Create two threads
        Thread thread1 = new Thread(new MyRunnable("Thread 1"));
        Thread thread2 = new Thread(new MyRunnable("Thread 2"));

        // Start the threads
        thread1.start();
        thread2.start();
    }
}
```

