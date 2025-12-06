#include <iostream>
#include <vector>

using namespace std;

int main() {
    // int a = 10;
    // int* p = &a;
    // int** y = &p;

    // cout << a << endl;
    // cout << p << endl;
    // cout << **y << endl;

    int arr[] = {10, 20, 30, 40};
    int* ptr = arr;

    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;
    ptr++;
    cout << *ptr << endl;
}