 #include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string emp_id;
    string emp_name;
    double emp_salary;
    string emp_department;

public:
    // Constructor
    Employee(string name, string id, double salary, string department) {
        emp_name = name;
        emp_id = id;
        emp_salary = salary;
        emp_department = department;
    }

    // Method to assign a new department
    void assign_department(string new_department) {
        emp_department = new_department;
    }

    // Method to calculate salary including overtime
    double calculate_emp_salary(double salary, int hours_worked) {
        if (hours_worked > 50) {
            int overtime_hours = hours_worked - 50;
            double overtime_amount = overtime_hours * (salary / 50);
            return salary + overtime_amount;
        }
        return salary;
    }

    
    void print_employee_details() {
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Salary: " << emp_salary << endl;
        cout << "Employee Department: " << emp_department << endl;
    }
};

int main() {
    // Creating Employee objects
    Employee e1("ADAMS", "E7876", 50000, "ACCOUNTING");
    Employee e2("JONES", "E7499", 45000, "RESEARCH");
    Employee e3("MARTIN", "E7900", 50000, "SALES");
    Employee e4("SMITH", "E7698", 55000, "OPERATIONS");

    // Print details before department change
    cout << "Before department change:" << endl;
    e1.print_employee_details();

    // Changing department
    e1.assign_department("FINANCE");

    // Print details after department change
    cout << "\nAfter department change:" << endl;
    e1.print_employee_details();

    // Calculate and print salary with overtime
    double new_salary = e1.calculate_emp_salary(50000, 55);
    cout << "\nSalary after overtime calculation: " << new_salary << endl;

    return 0;
}
