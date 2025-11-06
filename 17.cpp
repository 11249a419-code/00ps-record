#include <iostream>
using namespace std;


class Animal {
public:
    void speak() {
        cout << "Animals make sounds" << endl;
    }
};


class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks" << endl;
    }
};

int main() {
    Dog d;

    
    d.speak(); 
    d.bark();  

    return 0;
}
