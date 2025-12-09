#include<iostream>
using namespace std;

void Check(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    if(x%2==0){
        cout<<"The number inputted by user is Even"<<endl;
    } else{
        cout<<"The number inputted by user is Odd"<<endl;
    }
}
int main(){
    Check();
}