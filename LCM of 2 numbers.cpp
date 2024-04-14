#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n,m;
    cout<<"enter 1st number:";
    cin>>n;
    cout<<"enter 2nd number:";
    cin>>m;
    int small=(n<m)?n:m;
    int great=(n>m)?n:m;
    int mul=small*great;
    for (int i=1;i<=small;i++){
        if (small%i==0 && great%i==0){
            mul=mul/i;
            small/=i;
            great/=i;
        }
    }
    printf("The LCM of %d and %d is %d:",n,m,mul);
    return 0;
}