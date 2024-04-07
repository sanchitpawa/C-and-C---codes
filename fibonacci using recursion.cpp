#include<iostream>
#include<stdio.h>
using namespace std;
int fib(int m){   //to print nth element of fibonacci series
    if (m>0){
        if(m<=1){
            return m;
        }
        else {
            return fib(m-2)+fib(m-1);
        }
    }
}
int fibonacci(int n){  //to print fibonacci series
    static int t1=0,t2=1,s=0;
    if(n>0){
        if(n==7){
            cout<<t1<<" ";
            cout<<t2<<" ";
            return fibonacci(n-1);
        }
        else{
            cout<<t1+t2<<" ";
            s=t1+t2;
            t1=t2;
            t2=s;
            return fibonacci(n-1);
        }
    }
}
int main(){
    cout<<fib(7);
    cout<<endl;
    fibonacci(7);
    return 0;
}