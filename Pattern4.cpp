#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter value of n"<<" ";
    cin>>n;
    while (i<=n){
        if (i%3==0){
            cout<<i;
            cout<<endl;}
        else{
            cout<<i<<" ";
        }
        i=i+1;
        }

    }