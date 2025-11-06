#include<iostream>
using namespace std;
class Test {
    public:
         Test(){
            cout << "constructor executer" << endl;
         }
         Teat (){
            cout << "destructor executer"<< endl;
         }
};
int main (){
    Test obj;
    
}