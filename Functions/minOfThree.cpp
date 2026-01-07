#include<iostream>
using namespace std;
int minOfThree(int a, int b, int c){
    if(a<b && a<c){
        return a;
    }else if(b<c && b<a){
        return b;
    }else{
        return c;
    }
}

int main(){
    cout<< minOfThree(89, 67, 2);
}