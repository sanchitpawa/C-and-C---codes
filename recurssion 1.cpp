#include <iostream>
#include <stdio.h>
using namespace std;
void rev(int n){
    if (n>0){
        printf("%d ",n);
        rev(n-1);
    }
}
void fwd(int n){
    if (n>0){
        fwd(n-1);
        printf("%d ",n);
    }
}
int main(){
    rev(3);
    printf("\n");
    fwd(3);
}