#include<stdio.h>
int reverse(int n){
if(n==0)
    return 0;
else
    return (n%10)*10+ reverse(n/10);

}
int main()
{
    int n;
    printf("Enter the Number for Reversing :");
    scanf("%d",&n);

    if(n<0)
        printf("Please Enter the Non negative number");
    else
        printf("The Reverse of %d is %d",n,reverse(n));
    return 0;
}

