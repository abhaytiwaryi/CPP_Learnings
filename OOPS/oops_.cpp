#include<iostream>
using namespace std;

class Student{
public:
	int rno;
	string name;
	Student(){

	}
	
	Student(int rno, string name, float marks) {
		this->rno = rno;
		this->name = name;
		this->marks = marks;

	}

	void display() {
		cout<< name << endl;
		cout<< rno << endl;
		cout<< marks << endl;
	}

private:
	float marks;
};

int main() {
	Student s1(9, "abhay", 89);
	s1.display();

}