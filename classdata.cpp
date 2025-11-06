#include<iostream>
using namespace std;
class student
 { 
    string name;
    int age;
    int rollNumber;
    public:
    void getData(){
        cout<<"Enter student name";
        getline(cin,name);
        cout<<"Enter student age";
        cin >> age;
        cout<<"Enter student roll number";
        cin >> rollNumber;
        cin.ignore();
    }
    void displaydata(){
        cout <<"\nstudent information:"<< endl;
        cout <<"name:"<< name<< endl;
        cout <<"age:" << age << endl;
        cout << " rollnumber:"<< rollNumber << endl;
    }
};
int main(){
    student student1;
    student1.getData();
    student1.displaydata();
    return 0;
}