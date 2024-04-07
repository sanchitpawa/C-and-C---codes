#include<iostream>
#include<stdio.h>
using namespace std;
double taylor(int x,int n){
    static double p=1;
    static double f=1;
    if (n==0){
        return 1;
    }
    else {
        double r=taylor(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main(){
    cout<<taylor(2,20);
    return 0;
}