#include<iostream>
#include<stdio.h>
using namespace std;
double taylor(double x,double n){
    static double s=1;
    if(n==0){
        return s;
    }
    else {
        s=1+(x/n)*s;
        return taylor(x,n-1);
    }
}
int main(){
    cout<<taylor(2,10);
    return 0;
}