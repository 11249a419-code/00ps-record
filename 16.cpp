#include <iostream>
#include <cstring>   
using namespace std;

class MyString {
    char str[100];  
public:
    MyString() {
        str[0] = '\0'; 
    }

    MyString(const char s[]) {
        strcpy(str, s);
    }

    MyString operator+(const MyString &obj) const {
        MyString temp;
        strcpy(temp.str, str);       
        strcat(temp.str, obj.str);    
        return temp;
    }

    void display() const {
        cout << str;
    }
};

int main() {
    MyString s1("Hello ");
    MyString s2("World!");
    MyString s3;

    s3 = s1 + s2;  

    cout << "After concatenation: ";
    s3.display();

    return 0;
}
