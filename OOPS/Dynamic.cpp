#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    float marks;


    Student(string n, int a, float m) {
    name = n;
    age = a;
    marks = m;
}
};

int main() {

    Student *s1 = new Student("Abhay", 20, 89.5);

    cout << s1->name << endl;
}