#include<stdio.h>
int Power(int a,int n){
if(n<=1)
    return 1;
else
    return a*Power(a,n-1);

}
int main()
{
    int n,a;
    printf("Enter the no. for finding A raised to Power :");
    scanf("%d",&a);
    printf("Enter the power for finding A raised to Power :");
    scanf("%d",&n);

    if(n<0)
        printf("Please Enter the Non negative number");
    else
        printf("The Answer of %d raised to Power %d is %d",a,n,Power(a,n+1));
    return 0;
}
