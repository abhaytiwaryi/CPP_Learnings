#include<iostream>
using namespace std;
// int sum(int a, int b){
//     int s = a+b;
//     return s;
// }

// minOfTwo
int minOfTwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    cout<<minOfTwo(4,6);
    return 0;
}