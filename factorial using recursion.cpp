#include<iostream>
#include<stdio.h>
using namespace std;
int fact(int n){
    if (n>=1){
        return n*fact(n-1);
    }
    return 1;
}
int main(){
    cout<<fact(5);
    return 0;
}