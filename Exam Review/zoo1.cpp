
#include <iostream>
#include <string>

using namespace std;

// Step 1 – Create the Base Class Animal

// Instructions:

// Modify the Animal class.
// Add protected data members:
// string name – the animal's name.
// int age – the animal's age.
// ** Write a constructor that takes name and age as parameters and initializes the data members.
// Add the following public methods:
//   eat() – prints "<name> is eating.".
//   sleep() – prints "<name> is sleeping.".
//   info() – prints Name: <name>, Age: <age>.

class Animal {

    protected:
    string name;
    int age;


    public:
    Animal(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void eat(){
        cout << name << " is eating.\n";
    }

    void sleep(){
        cout << name << " is sleeping.\n";
    }

    void info(){
        cout << "Name: " << name << ", Age: " << age << "\n";
    }
};


// Step 2 – Create Derived Classes

// Instructions:

// Modify three classes that inherit from Animal:
// Lion
// Elephant
// Monkey
// Each derived class should have a constructor that passes the name and age to the base class constructor.
// Add one unique behavior method to each derived class:
//   Lion: roar() prints "<name> roars loudly!".
//   Elephant: sprayWater() prints "<name> sprays water with its trunk!".
//   Monkey: climb() prints "<name> climbs a tree!".

class Lion : public Animal {

    public:
    Lion(string name, int age): Animal(name, age) {};

    void roar(){
        cout << name << " roars loudly!\n";
    }



};


// Step 3 – Use Classes in main()

// Instructions:

// In main(), create one object of each derived class:
// Example:
//          Lion leo;
//          leo.name = "Leo";
//          leo.age = 5;
// Call shared methods (eat(), sleep(), info()) for at least one animal each.
// Call unique methods for each animal (roar(), sprayWater(), climb()).



// Step 4 – Extension Tasks
// Add a ZooKeeper class with a feedAnimal(Animal &a) method.
// main: Create an array of Animal* and call eat() for all animals.
// Add a color property to each animal and display it.
// Add a new animal type like Giraffe or Penguin with its own unique action.
