# Implement-Constructors-and-Destructors-in-CPP

# Aim:
To study and implementation of Constructors and  Destructors in C++

# Software used:
Mingw compiler, visual studio code, online C++ compiler

# Program 1 Constructor inside class

 Theory of the code:
This C++ program demonstrates a constructor defined inside a class. The Car class contains three data members: price, carname, and mileage. The constructor Car() is automatically invoked when an object (sedan) is created in main(). It prompts the user to input car details. The display() function then outputs the stored values. The constructor ensures initialization at object creation, enhancing encapsulation and reducing errors. The use of char carname[77] instead of string reflects manual character array handling.

Algorithm:

- Start
- Define a class Car with data members: price, carname, and mileage
- Create a constructor to input values from the user
- Define a display() function to show car details
- In main(), create an object of class Car 
- Call display() to print the car information
- End

# Program 2 Constructor outside class

Theory of the code:
This C++ program demonstrates a constructor defined outside the class using the scope resolution operator ::. The Car class contains three data members: price, carname, and mileage. The constructor Car() is declared inside the class but defined outside, where it prompts the user to input values. The display() function, also defined outside, prints the car details. In main(), creating the object sedan automatically calls the constructor. 

Algorithm:
- Start
- Define class Car with data members: price, carname, mileage
- Declare constructor and display() function inside the class
- Define constructor outside the class using Car::Car()
- Define display() function outside the class using Car::display()
- In main(), create object sedan
- Call sedan.display() to print car details
- End 

# Program 3 Parameterized Constructor

 Theory of the code:
This C++ program demonstrates a parameterized constructor inside the Product class. The constructor takes four arguments—id, n, c, and p—to initialize the data members: ProID, Name, Category, and Price. This approach allows direct initialization of object properties at the time of creation, improving clarity and reducing the need for separate input statements. The display() function prints the product details. In main(), an object p is created with specific values, and display() is called to show the output. 

Algorithm:
- Start
- Define class Product
- Create a parameterized constructor
- Define display() function
- In main(), create object using constructor
- Call display()
- End

# Program 4 Copy Constructor

Theory of the code:
This C++ program demonstrates the use of a copy constructor in the student class. The class contains three data members: rno, name, and fee. The parameterized constructor initializes these values using user-defined inputs. The copy constructor takes a reference to another student object and duplicates its data using strcpy() for the character array. In main(), object s is created with initial values, and then object manjeet is created by copying s. 

Algorithm:
- Start
- Define class student with data members: rno, name, fee
- Declare and define a parameterized constructor to initialize values
- Declare and define a copy constructor to copy values from another object
- Define display() function to print student details
- In main(), create object s using parameterized constructor
- Create object manjeet using copy constructor with s
- Call display() for both objects
- End

# Program 5 Destructors

Theory of the code:
This C++ program illustrates the use of constructors and destructors to track object creation and destruction. The global variables count and destroy monitor how many objects are created and destroyed. Each time a destruct object is instantiated, the constructor increments count and displays it. When an object goes out of scope, the destructor is automatically called, decrementing destroy and printing the updated count. In main(), four objects are created—three in the outer scope and one (dd) in an inner block. The destructor for dd is triggered immediately after its block ends, while the others are destroyed at program termination.

Algorithm:
- Start
- Initialize global variables count and destroy
- Define class destruct
- Define constructor to increment and display count
- Define destructor to decrement and display destroy
- In main(), create objects aa, bb, cc
- Create object dd inside a block
- End block (triggers destructor for dd)
- End 


# Conclusion

These programs collectively demonstrate key concepts of object-oriented programming: constructors (default, parameterized, and copy), destructors, and encapsulation. The first two codes show how constructors can be defined inside or outside a class to initialize objects. The third highlights parameterized constructors for direct value assignment. The fourth introduces copy constructors for duplicating object data. The fifth illustrates object lifecycle using constructors and destructors to track creation and destruction. Together, they build a strong foundation in class design, memory handling, and object behavior—essential for mastering C++ and writing efficient, modular, and maintainable code.
