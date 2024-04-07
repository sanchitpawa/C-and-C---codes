#include<iostream>
#include<stdio.h>
using namespace std;
int power(int n,int m){
    if (m>0){
        return n*power(n,m-1);
    }
    return 1;
}
int power1(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return power1(m*m,n/2);
    }
    else {
        return m*power1(m*m,(n-1)/2);
    }
}
int main(){
    cout<<power(2,9)<<endl;
    cout<<power1(2,9);
    return 0;
}