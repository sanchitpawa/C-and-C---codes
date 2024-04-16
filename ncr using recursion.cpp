#include<iostream>
#include<stdio.h>
using namespace std;
int ncr(int t,int p){
    if(p==0||p==t){
        return 1;
    }
    else{
        return ncr(t-1,p-1)+ncr(t-1,p);
    }
}
int main(){
    cout<<ncr(3,2);
    return 0;
}

int main(){
    
    return 0;
}
