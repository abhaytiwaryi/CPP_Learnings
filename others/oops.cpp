#include <iostream>
#include <vector>

using namespace std;

class Chai {
    //data Members(attributes)
    string teaName; // name of the tea
    int servings; // number of servings
    vector<string> ingredients; // list of ingrediemts of the tea


    //member function

    void displayChaiDetails() {
    cout << "Tea Name: " << teaName << endl;
    cout << "Servings: " << servings << endl;
    cout << "Ingredients: " ;

}

};


int main() {

    return 0;
}