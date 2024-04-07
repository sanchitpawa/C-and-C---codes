#include<iostream>
#include<stdio.h>
using namespace std;
void B(int n){
    void A(int m);      //this is a prototype so that it calls function A
    if (n>1){
        cout<<n<<" ";
        A(n/2);
    }
}
void A(int m){
    if (m>0){
        cout<<m<<" ";
        B(m-1);
    }
}
int main(){
    B(20);
    return 0;
}