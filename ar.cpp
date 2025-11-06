#include <iostream>
using namespace std;
void area (int r){
    cout << "area of circle = " << 3.14 *r * r << endl;
}
void area (int l,int b){
    cout << " area of rectangle = "<< l * b << endl;
}
int main(){
    area (5);
    area(4,6);
}