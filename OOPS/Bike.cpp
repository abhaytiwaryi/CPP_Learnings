#include<iostream>
using namespace std;

class Bike {
    public:
    string brand;
    string model;
    int year;
};

void print(Bike b){
    cout << b.brand << endl;
    cout << b.model << endl;
    cout << b.year << endl;
}

int main() {

    Bike b1;
    b1.brand = "Yamaha";
    b1.model = "FZ";
    b1.year = 2020;

    Bike b2;
    b2.brand = "Honda";
    b2.model = "CBR";
    b2.year = 2021;

    Bike b3;
    b3.brand = "Suzuki";
    b3.model = "Gixxer";
    b3.year = 2019;

    Bike b4;
    b4.brand = "KTM";
    b4.model = "Duke";
    b4.year = 2022;

    print(b1);
    cout << endl; 
    print(b2);
    cout << endl; 
    print(b3);
    cout << endl; 
    print(b4);
}