#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";

        int s = sizeof(arr)/sizeof(arr[0]);

        int y = s*= arr[i];

        cout << y << endl;
    }
    
}