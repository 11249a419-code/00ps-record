#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animals eat food" << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammals can walk" << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;

    d.eat();   
    d.walk();  
    d.bark();  

    return 0;
}
