#include <iostream>
using namespace std;
class MyClass {
private:
    int value;

public:
   
    MyClass(int val) {
        value = val;
        cout << "Constructor called! Value is: " << value << endl;
    }

    
    ~MyClass() {
        cout << "Destructor called! Cleaning up value: " << value << endl;
    }

    void displayValue() {
        cout << "The value is: " << value << endl;
    }
};

int main() {
    MyClass obj1(10);
    obj1.displayValue(); 

    {
        MyClass obj2(20);
        obj2.displayValue();
    } 

    return 0;
} 
