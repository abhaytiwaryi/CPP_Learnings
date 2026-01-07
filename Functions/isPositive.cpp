#include<iostream>
using namespace std;
    void isPositive(int n){
        if(n>0){
            cout<<n <<"is Positive"<<endl;
        }else{
            cout<<"Negative";
        }
    }

int main(){
    isPositive(-9);
}