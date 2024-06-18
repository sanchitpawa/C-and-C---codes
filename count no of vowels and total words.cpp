#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    char a[]="My Name is   Sanchit";
    int vcount=0,ccount=0,word=0;
    for (int i=0;a[i]!='\0';i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
            vcount++;
        }
        else if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z')){
            ccount++;
        }
        if(a[i]==' ' && a[i-1]!=' '){
            word++;
        }
    }
    cout<<"Number of vowels are:"<<vcount<<endl<<"Number of consonents are:"<<ccount<<endl<<"Number of words are:"<<word+1;
    return 0;
}