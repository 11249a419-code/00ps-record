#include <iostream>
using namespace std;

class Employee {
    private:
        double basicPay;
        double da;
        double hra;
        double grossSalary;
        double tax;
        double netSalary;

    public:
        void getInput() {
            cout << "Enter basic pay: ";
            cin >> basicPay;
        }

        void calculate() {
            da = basicPay * 0.70;
            hra = basicPay * 0.10;
            grossSalary = basicPay + da + hra;
            tax = grossSalary * 0.20;
            netSalary = grossSalary - tax;
        }

        void displayPayslip() {
            cout << "\n--- Employee Payslip ---\n";
            cout << "Basic Pay: " << basicPay << endl;
            cout << "DA (70% of Basic): " << da << endl;
            cout << "HRA (10% of Basic): " << hra << endl;
            cout << "Gross Salary: " << grossSalary << endl;
            cout << "Tax (20% of Gross Salary): " << tax << endl;
            cout << "Net Salary: " << netSalary << endl;
        }
};

int main() {
    Employee emp;

    emp.getInput();
    emp.calculate();
    emp.displayPayslip();

    return 0;
}
