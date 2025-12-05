#include<iostream>
using namespace std;

class Phone {
    public:

    string brand;
    string colour;
    int price;

    //Constructor

    Phone() {

    }

    Phone(string b, string c, int p) {

        brand = b;
        colour = c;
        price = p;
    }
};

int main() {

    Phone s1("Samsung m35", "Blue", 170000);

    Phone s2;
    s2.brand = "Iphone 13";
    s2.colour = "Black";
    s2.price = 900000;

    cout << s1.brand << endl;
    cout << s1.colour << endl;
    cout << s1.price << endl;
    cout << endl;
    cout << s2.brand << endl;
    cout << s2.colour << endl;
    cout << s2.price << endl;

}





 