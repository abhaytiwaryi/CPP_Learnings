#include <iostream>
using namespace std;

int main() {
    // int arr[5];
    // for(int i = 0; i < 4; i++) {
    //     cin >> arr[i];
    // }
    
    
    // for(int i = 0; i < 4; i++) {
    //     cout << arr[i] << " ";
    // }

    int arr[] = {1, 2, 3, 65, 56, 78, 89, 54, 43, 23};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i <= n -1; i++) {
        cout << arr[i] << " ";
    }
}