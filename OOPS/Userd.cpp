#include<iostream>
using namespace std;

class Vector{
    public:
    int size;
    int capacity;
    int* arr;

    Vector() {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele) {
        if(size == capacity) {
            capacity *= 2;
            int* arr2 = new int [capacity];
            for(int i=0; i<size; i++) {
        }
    }
};

int main() {

}