# Overloading in C++

Name: Pal Jain  
PRN: 24070123067  
Class: ENTC A3

## **Aim:**
To study **constructor overloading**, **function overloading**, and **operator overloading** in C++.

---

## **Theory:**

In Object-Oriented Programming, **overloading** refers to using the same name for a function, constructor, or operator in such a way that its behavior adapts based on the input or context.
This makes code cleaner, simpler, and easier to reuse.
Instead of creating multiple function names for similar tasks, one name is reused with different definitions.
Overloading improves code readability and helps in writing modular programs.

A constructor can accept different types of arguments to create an object in multiple ways.
Operators can be redefined so objects behave like built-in data types during mathematical operations.

---

## **Types of Overloading**

* **Constructor Overloading**
  When a class includes multiple constructors with different parameter lists, allowing objects to be created in multiple ways.

* **Function Overloading**
  When a function name is reused with different parameter types or numbers of parameters, and the compiler decides which function to call during compilation.

* **Operator Overloading**
  Redefining operators (like `+`, `-`, `*`, `/`) for user-defined types, enabling intuitive operations between objects.

---

## **Syntax for Overloading in C++**

### Constructor Overloading

```cpp
class ClassName {
public:
    ClassName() {
        // default initialization
    }

    ClassName(int a, int b) {
        // initialization with parameters
    }
};
```

---

### Function Overloading

```cpp
class ClassName {
public:
    void display() {
        // no argument version
    }

    void display(int a) {
        // one integer argument version
    }

    void display(double x, double y) {
        // two double arguments version
    }
};
```

---

### Operator Overloading

```cpp
class ClassName {
    int value;
public:
    ClassName(int v = 0) {
        value = v;
    }

    ClassName operator+(ClassName &obj) {
        ClassName temp;
        temp.value = value + obj.value;
        return temp;
    }
};
```

---

## **Program 1: Constructor Overloading (First Example)**

### **Logic:**

This program demonstrates multiple constructors in a class.
A class has three constructors with different parameter lists.
The compiler automatically selects the appropriate constructor based on the arguments during object creation.
Different constructors handle adding integers, floating-point numbers, or multiple integers.

---

## **Program 2: Constructor Overloading (Second Example)**

### **Logic:**

This program demonstrates constructor overloading using a `Product` class.
One constructor calculates profit or loss from cost price, selling price, and quantity sold.
Another constructor calculates remaining stock by subtracting sold items from total stock.
It shows how the same class can perform different tasks using constructor overloading.

### **Algorithm:**

1. Start
2. Define class `Product`.
3. Create a constructor to calculate profit/loss using cost price, selling price, and items sold.
4. Create another constructor to calculate remaining stock from total and sold quantity.
5. In `main()`, create objects using both constructors.
6. Display results.
7. End

---

## **Program 3: Function Overloading**

---

### **Logic:**

The `Shapes` class demonstrates **function overloading** by defining multiple `circumference()` functions with different parameter types.
Depending on the arguments passed, it calculates the circumference or perimeter of a square, circle, rectangle, or triangle.
This avoids writing separate functions with different names and keeps the code simple and easy to manage.


### **Algorithm:**

1. Start
2. Define class `Shapes`.
3. Create multiple `circumference()` functions:

   * For square circumference (takes one double and an int as dummy argument)
   * For circle circumference (takes one double argument)
   * For rectangle perimeter (takes two double arguments)
   * For triangle perimeter (takes three double arguments)
4. In `main()`, create objects of `Shapes` class.
5. Call `circumference()` with appropriate arguments for each shape.
6. Display the results.
7. End

---

## **Program 4: Operator Overloading (Complex Number Addition)**

### **Logic:**

This program demonstrates **operator overloading** by redefining the `+` operator for a `ComplexNumber` class.
It allows adding complex numbers using the simple syntax `num1 + num2`.
The overloaded operator function adds the `realPart` and `imaginaryPart` of the objects and returns a new object with the result.
This makes complex addition as intuitive as working with integers.


### **Algorithm:**

1. Start
2. Define class `ComplexNumber` with members `realPart` and `imaginaryPart`.
3. Write a constructor to initialize values.
4. Overload the `+` operator to add two `ComplexNumber` objects.
5. In `main()`, create two objects, add them using `+`, and display the result using `display()`.
6. End

---

## **Program 5: Operator Overloading (Calculator)**


### **Logic:**

This program demonstrates **operator overloading** by redefining arithmetic operators (`+`, `-`, `*`, `/`) for a `Calculator` class.
It allows objects to interact using natural arithmetic syntax, e.g., `num1 + num2`.
Each overloaded operator performs the respective operation on the `value` members of two objects and returns a new object with the result.
This makes arithmetic operations with objects as intuitive as working with primitive data types.

### **Algorithm:**

1. Start
2. Define class `Calculator` with a member `value`.
3. Write a constructor to initialize `value`.
4. Overload operators:

   * `+` to add two `Calculator` objects
   * `-` to subtract two `Calculator` objects
   * `*` to multiply two `Calculator` objects
   * `/` to divide two `Calculator` objects
5. Write a `display()` function to print the `value`.
6. In `main()`, create two `Calculator` objects.
7. Perform addition, subtraction, multiplication, and division using overloaded operators.
8. Display the results.
9. End

---

## **Conclusion**

* Constructor overloading enables multiple ways to initialize objects.
* Function overloading allows using the same function name for different tasks, improving readability.
* Operator overloading makes user-defined types behave like built-in types, simplifying interactions.

These techniques promote a clean, modular, and object-oriented programming style.
