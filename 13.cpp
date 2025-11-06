#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) : value(v) {}

    void display() const {
        cout << "Value: " << value << endl;
    }

    Number operator-() const {
        return Number(-value);
    }
};

int main() {
    Number n1(10), n2;

    cout << "Before overloading:\n";
    n1.display();

    n2 = -n1;

    cout << "After applying unary minus:\n";
    n2.display();

    return 0;
}
