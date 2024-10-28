
# 1. Reading a File Using FileReader and BufferedReader

Aim: To read the contents of a text file line by line using Java I/O classes.

Algorithm:

-	1.	Start.
-	2.	Initialize a BufferedReader with a FileReader pointing to the file.
-	3.	Read each line of the file in a loop until the end of the file is reached.
-	4.	Print each line to the console.
-	5.	Handle any IOException exceptions.
-	6.	End.

This program reads the contents of a text file line by line.

```java
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class FileReadExample {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new FileReader("example.txt"))) {
            String line;
            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```

# 2. Writing to a File Using FileWriter and BufferedWriter

Aim: To write data to a file using Java I/O classes.

Algorithm:

-	1.	Start.
-	2.	Initialize a BufferedWriter with a FileWriter pointing to the output file.
-	3.	Write the desired text to the file.
-	4.	Optionally, add a newline character.
-	5.	Handle any IOException exceptions.
-	6.	Close the file after writing.
-	7.	End.

This program writes a string to a file.
```java
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class FileWriteExample {
    public static void main(String[] args) {
        try (BufferedWriter bw = new BufferedWriter(new FileWriter("output.txt"))) {
            bw.write("Hello, World!");
            bw.newLine();
            bw.write("Java IO is simple.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```

# 3. Copying a File Using FileInputStream and FileOutputStream

Aim: To copy the contents of one file to another using Java I/O classes.

Algorithm:

-	1.	Start.
-	2.	Initialize FileInputStream for the source file.
-	3.	Initialize FileOutputStream for the destination file.
-	4.	Read each byte from the source file.
-	5.	Write each byte to the destination file.
-	6.	Handle any IOException exceptions.
-	7.	Close both streams after copying.
-	8.	End.


This program copies a file byte by byte.
```java
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileCopyExample {
    public static void main(String[] args) {
        try (FileInputStream fis = new FileInputStream("source.txt");
             FileOutputStream fos = new FileOutputStream("destination.txt")) {
            int data;
            while ((data = fis.read()) != -1) {
                fos.write(data);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```

# 4. Reading and Writing Objects Using ObjectInputStream and ObjectOutputStream

Aim: To serialize an object to a file and deserialize it back using Java I/O classes.

Algorithm:

-	1.	Start.
-	2.	Define a serializable class (e.g., Person) with necessary attributes.
-	3.	Object Serialization:
-	•	Initialize an ObjectOutputStream with a FileOutputStream.
-	•	Write the object to the file.
-	•	Handle any IOException.
-	4.	Object Deserialization:
-	•	Initialize an ObjectInputStream with a FileInputStream.
-	•	Read the object from the file.
-	•	Handle any IOException or ClassNotFoundException.
-	5.	Print the deserialized object’s data.
-	6.	End.

This example demonstrates how to serialize and deserialize an object.
```java
import java.io.*;

class Person implements Serializable {
    private static final long serialVersionUID = 1L;
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}

public class ObjectReadWriteExample {
    public static void main(String[] args) {
        Person person = new Person("Alice", 30);

        // Write the object to a file
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("person.ser"))) {
            oos.writeObject(person);
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Read the object from the file
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream("person.ser"))) {
            Person savedPerson = (Person) ois.readObject();
            System.out.println("Name: " + savedPerson.name + ", Age: " + savedPerson.age);
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
```
