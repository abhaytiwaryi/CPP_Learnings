#include <iostream>
using namespace std;
int getMax(int num[], int n) {

    int max = INT_MIN;

    for(int i =0; i<n;i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n){
    
    int min = INT_MIN;

    for(int i=0;i<n;i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}
int main() {
    int size;
    cin >> size;

    int num[1000];
    //taking input
    for(int i=0; i<size; i++){
        cin >> num[i];
    }
    cout << "Maximum value: " << getMax(num, size) << endl;

    return 0;
}