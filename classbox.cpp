#include <iostream>
using namespace std;
class box {
    public:
    int length;
    void set(int l) {length = 1;}
    void compare(box b){
        if(length > b.length)
           cout << "first box is bigger"<< endl;
        else
            cout << "second box is bigger"<<endl;
    }
};
int main() {
    box b1,b2;
    b1.set(10);
    b2.set(20);
}