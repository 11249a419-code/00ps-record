#include <iostream>
#include <cstdlib>  // For malloc and free

class MyClass {
public:
    int data;

    // Custom new operator
    void* operator new(size_t size) {
        std::cout << "Custom new called. Size: " << size << " bytes\n";
        void* ptr = std::malloc(size);  // allocate memory manually
        if (!ptr) {
            throw std::bad_alloc();     // handle allocation failure
        }
        return ptr;
    }

    // Custom delete operator
    void operator delete(void* ptr) {
        std::cout << "Custom delete called.\n";
        std::free(ptr);  // free the memory
    }

    // Constructor and destructor
    MyClass() {
        std::cout << "Constructor called.\n";
    }

    ~MyClass() {
        std::cout << "Destructor called.\n";
    }
};

int main() {
    MyClass* obj = new MyClass();
    delete obj;

    return 0;
}
