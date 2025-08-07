# C++ OOP: Inheritance and Polymorphism Examples

This repository contains two separate, self-contained C++ programs that demonstrate different aspects of Object-Oriented Programming (OOP), focusing on **inheritance**, **polymorphism**, and **specialization**.

---

## 1. Animal Hierarchy (`AnimalHome.cpp`)

This program illustrates a classic use of inheritance and polymorphism to model an "is-a" relationship between a general base class and several specific derived classes.

### About The Project

The goal is to define a base `HomeAnimal` class that contains common attributes and behaviors, and then create specialized classes like `Dog`, `Cat`, and `Parrot` that inherit from it. The use of virtual functions allows for polymorphic behavior, where the correct `Print()` method is called depending on the object's actual type.

### Concepts Demonstrated

*   **Inheritance**: Derived classes (`Dog`, `Cat`) inherit properties from a base class (`HomeAnimal`).
*   **Polymorphism**: The `Print()` method is declared `virtual` in the base class and `override`n in the derived classes, allowing it to behave differently for each type of animal.
*   **`protected` Access Modifier**: Base class members are accessible to derived classes but not to the public.
*   **Class Hierarchies**: A fundamental OOP structure for code reuse and organization.

### How to Build and Run

1.  Save the code as `AnimalHome.cpp`.
2.  Compile it using a C++ compiler:
    ```sh
    g++ AnimalHome.cpp -o animal_app
    ```
3.  Run the executable:
    ```sh
    ./animal_app
    ```

### Expected Output
```
Info for Dog: 
Count Paws: 4
Color: White
Breed: Lablador

Info for Cat: 
Count Paws: 4
Color: Gray
Breed: Egypt breed

Info for Parrot: 
Count Paws: 2
Color: Green-Yellow
Breed: Brazil
```

---

## 2. String and BitString Hierarchy (`BitString.cpp`)

This program demonstrates inheritance for **specialization**. A `BitString` class is created as a specialized version of a general `String` class, adding new functionality and enforcing specific constraints.

### About The Project

The base `String` class acts as a simple wrapper around `std::string`. The derived `BitString` class inherits this general functionality but adds a crucial constraint: it can only contain the characters '0' and '1'. It also adds a new method, `Invertation()`, specific to its binary nature.

### Concepts Demonstrated

*   **Inheritance for Specialization**: Creating a new class that is a more specific version of its parent.
*   **Constructor Validation**: The `BitString` constructor checks its input to enforce the "binary only" rule.
*   **Adding Functionality**: The derived class introduces a new method (`Invertation`) that does not exist in the base class.
*   **Operator Overloading/Hiding**: The derived class re-implements operators like `+` and `<<` to ensure they return the correct type (`BitString`) and work as expected within the specialized context.
*   **Composition**: The base `String` class uses `std::string` internally to handle memory and operations, delegating the hard work to the standard library.

### How to Build and Run

1.  Save the code as `BitString.cpp`.
2.  Compile it using a C++ compiler:
    ```sh
    g++ BitString.cpp -o bitstring_app
    ```
3.  Run the executable:
    ```sh
    ./bitstring_app
    ```

### Expected Output```
Hi, i Artem
10100110
Invert: 01011001
```
```
