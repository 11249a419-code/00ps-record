#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "Animals eat food" << endl;
    }
};

// Base class 2
class Pet {
public:
    void play() {
        cout << "Pets like to play" << endl;
    }
};

// Derived class inherits from both Animal and Pet
class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;

    // Access methods from both base classes and the derived class
    d.eat();   // from Animal
    d.play();  // from Pet
    d.bark();  // from Dog

    return 0;
}
