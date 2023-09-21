#include <string>
using namespace std;
class Employee {
private:
    string name;
    int age;
    double salary;

public:
    Employee() {
        cout << "Constructing default..." << endl;
    }

    Employee(const std::string& n, int a, double s) : name(n), age(a), salary(s) {
        cout << "Constructing parameterized..." << endl;
    }

    ~Employee() {
        cout << "Destructing..." << endl;
    }

    void setName(const string& n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setSalary(double s) {
        salary = s;
    }

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    double getSalary() const {
        return salary;
    }
};

double calculateTax(const Employee& emp) {
    return 0.55 * emp.getSalary();
}

int main() {
    Employee emp("John Doe", 30, 50000.0);
    
    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Age: " << emp.getAge() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;
    
    double taxAmount = calculateTax(emp);
    cout << "Tax to be paid: $" << taxAmount << endl;

    return 0;
}