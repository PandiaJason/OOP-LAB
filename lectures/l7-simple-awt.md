# EXP7 - BASIC Abstract Window Toolkit 

## Aim:

To create a simple Java AWT (Abstract Window Toolkit) application with four major components: a Label, TextField, Button, and TextArea.

## Algorithm:

-	1.	Start.
-	2.	Import the necessary AWT and event-handling packages.
-	3.	Create a class that extends Frame and implements ActionListener.
-	4.	Initialize the AWT components: Label, TextField, Button, and TextArea.
-	5.	Set the layout and add components to the frame.
-	6.	Implement the actionPerformed method to handle button clicks and display the input from the TextField in the TextArea.
-	7.	Set the frame size and make it visible.
-	8.	End.

## Prerequestries
Steps to Build and Run the AWT Program in Eclipse:

-	1.	Open Eclipse.
-	2.	Create a New Java Project:
- - 	•	File > New > Java Project.
- -	•	Enter project name (e.g., SimpleAWTApp).
- -	•	Click Finish.
-	3.	Create a New Java Class:
- -	•	Right-click src > New > Class.
- -	•	Enter SimpleAWTApp as the class name.
- -	•	Check public static void main(String[] args).
- -	•	Click Finish.
-	4.	Wrie the program:
- -	•	Write the AWT code into the SimpleAWTApp.java file.
-	5.	Save the File (Ctrl + S).
-	6.	Run the Program:
- -	•	Right-click SimpleAWTApp.java > Run As > Java Application.
-	7.	Interact with the Application.

## Program:
```java
import java.awt.*;
import java.awt.event.*;

// A simple AWT app with four components
public class SimpleAWTApp extends Frame implements ActionListener {
    // Declare AWT components
    Label label;
    TextField textField;
    Button button;
    TextArea textArea;

    // Constructor to set up the GUI
    public SimpleAWTApp() {
        // Set up the layout
        setLayout(new FlowLayout());

        // Initialize components
        label = new Label("Enter text: ");
        textField = new TextField(20);
        button = new Button("Submit");
        textArea = new TextArea(5, 20);

        // Add components to the frame
        add(label);
        add(textField);
        add(button);
        add(textArea);

        // Add action listener for the button
        button.addActionListener(this);

        // Set frame properties
        setTitle("Simple AWT App");
        setSize(300, 200);
        setVisible(true);
    }

    // Action event handler
    public void actionPerformed(ActionEvent e) {
        // Get text from the text field and display it in the text area
        String input = textField.getText();
        textArea.setText("You entered: " + input);
    }

    // Main method to start the application
    public static void main(String[] args) {
        new SimpleAWTApp();
    }
}
```
