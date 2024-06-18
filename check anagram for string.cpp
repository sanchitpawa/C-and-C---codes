#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    char a[]="medical";
    char b[]="decimal";
    int i=0;
    int j=0;
    while(a[i]!='\0'){
        i++;
    }
    while(b[j]!='\0'){
        j++;
    }
    if(i!=j){
        printf("Not anagram");
    }
    else{
        int m,n;
        int hi;
        for(m=0;m<i;m++){
            hi=0;
            for(n=m;n<j;n++){
                if(a[m]==b[n]){
                    b[n]='0';
                    swap(b[n],b[m]);
                    hi=1;
                    break;
                }
            }
            if(hi==0){
                printf("Not Aanagram");
                break;
            }
        }
        if(hi==1){
            printf("Anagram");
        }
    }
    return 0;
}