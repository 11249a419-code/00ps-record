#include <iostream>
using namespace std;
class number {
    public:
           number(){
               cout << "This is defaulter constructor"<< endl;  
           }
           number(int x){
               cout<<"This is parameterized constructor withvalue: " << x << endl;
           }
};
int main (){
    number n1;
    number n2(50);
}