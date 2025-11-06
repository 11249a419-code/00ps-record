#include <iostream>
using namespace std;

class MyClass {
private:
    int x, y;

public:
    MyClass(int a, int b) {
        x = a;
        y = b;
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
    int getX() const {
        return x;
    }
    int getY() const {
        return y;
    }
    void setX(int value) {
        x = value;
    }

    
    void setY(int value) {
        y = value;
    }
};


void passByValue(MyClass obj) {
    cout << "Inside passByValue function (object copy): ";
    obj.display();
    
    obj.setX(100);  
    cout << "After modifying inside passByValue function: ";
    obj.display();
}


void passByReference(MyClass &obj) {
    cout << "Inside passByReference function: ";
    obj.display();
   
    obj.setY(200);  
    cout << "After modifying inside passByReference function: ";
    obj.display();
}

int main() {
    MyClass obj1(10, 20); 

   
    cout << "Before passByValue: ";
    obj1.display();
    passByValue(obj1);
    cout << "After passByValue: ";
    obj1.display(); 

    
    cout << "\nBefore passByReference: ";
    obj1.display();
    passByReference(obj1);
    cout << "After passByReference: ";
    obj1.display();  

    return 0;
}
