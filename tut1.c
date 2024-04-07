#include <stdio.h>

int main()
{
    int num, remainder;
    int digits;
    int i=0;
    int j;
    char a[10][7]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int arr[100];

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num!=0 && i<100)
    {
        arr[i]= num%10;
        num = num/10;
        i++;
    }
    printf("The digits are: \n");
    for (int j=i-1;j>=0;j--) {
       printf("%s ",a[arr[j]]);
    }
    return 0;
}