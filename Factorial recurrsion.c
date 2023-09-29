#include<stdio.h>
int fact(int n){
if(n<=1)
    return 1;
else
    return n*fact(n-1);

}
int main()
{
    int n;
    printf("Enter the no. for finding factorial :");
    scanf("%d",&n);
    if(n<0)
        printf("Please Enter the Non negative number");
    else
        printf("The factorial is %d",fact(n));
    return 0;
}
