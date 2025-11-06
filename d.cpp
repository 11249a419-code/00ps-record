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
    
}