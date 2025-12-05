#include<iostream>
using namespace std;

class Students{
    public:
    string name;
    int rno;
    float gpa;
};

void print(Students s){
    cout << s.name << endl;
    cout << s.rno << endl;
    cout << s.gpa << endl;
}

int main() {
    Students s;
    s.name = "abhay";
    s.rno = 101;
    s.gpa = 9.5;


    Students s1;
    s.name = "anil";
    s.rno = 102;
    s.gpa = 9.7;


    print(s1);
}