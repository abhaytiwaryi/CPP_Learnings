#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int sum = 0;

    int elements;
    cout << "Enter elements: " <<endl;

//Taking Input from user.
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
//Printing the array.
    for(int i=0; i<5; i++){
        sum = sum + arr[i];
    }
    cout << sum;


    return 0;
}