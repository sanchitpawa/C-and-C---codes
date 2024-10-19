#include <stdio.h>
int rev(int Num){
    int remainder,rev_Num=0;
    while (Num != 0){

        remainder = Num % 10;

        rev_Num = rev_Num * 10 + remainder;

        Num = Num/10;

    }    
    return rev_Num;
}
int main(){
    int num,i=0,j,remainder,k=0;
    char a[10][7]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    //int b[10];
    printf("Enter the no:");
	scanf("%d",&num);
    int revnum=rev(num);
    printf("The digits are: \n");
    printf("%d",revnum);
    while (revnum != 0){

        remainder = revnum % 10;
        revnum = revnum/10;
        printf("%s ",a[remainder]);
    }
}