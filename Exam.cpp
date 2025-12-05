#include<iostream>
#include<string>
using namespace std;

class Teacher {
    private:
    double salary;
    public:
    //properties/attributes
    string name;
    string dept;
    string subject;

    //methods/member functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    //setter
    void setSalary(double s) {
        salary = s;
    }
    //getter
    double getSalary() {
        return salary;
    }
};

int main() {
    // Create an object of the Teacher class
    Teacher t1;
    t1.name = "John Doe";
    t1.dept = "Arabic";
    t1.subject = "arab";
    t1.setSalary(5000.0);
    // Print the details of the teacher
    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl;
}