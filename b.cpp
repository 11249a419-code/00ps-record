#include <iostream>
using namespace std;

class MyClass {
private:
    int x, y;

public:
    
    MyClass() {
        x = 0;
        y = 0;
        cout << "Default constructor called! x = " << x << ", y = " << y << endl;
    }

    
    MyClass(int a) {
        x = a;
        y = 0;
        cout << "Constructor with one argument called! x = " << x << ", y = " << y << endl;
    }

    
    MyClass(int a, int b) {
        x = a;
        y = b;
        cout << "Constructor with two arguments called! x = " << x << ", y = " << y << endl;
    }

    // Method to display the values of x and y
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    
    MyClass obj1;          
    obj1.display();

    MyClass obj2(5);         

    MyClass obj3(10, 20);    
    obj3.display();

    return 0;
}
