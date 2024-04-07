#include<iostream>
#include<stdio.h>
using namespace std;
int sum(int n){
    static int x;
    if(n>0){
        x++;
        return sum(n-1)+x;
    }
}
int main(){
    cout<<sum(5)<<endl;
    cout<<sum(5);
    return 0;
}