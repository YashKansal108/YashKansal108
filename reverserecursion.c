#include<stdio.h>
#include<math.h>
int len(n){
int count =0;
if(n==0)
    return 0;
else{
    count++;
    return 1 +len(n/10);

}
}
int reverse(int n,int count){
if(n==0)
    return 0;
else
    return (n%10)*pow(10,count-1)+ reverse(n/10,count-1);

}
int main()
{
    int n;
    printf("Enter the Number for Reversing :");
    scanf("%d",&n);

    if(n<0)
        printf("Please Enter the Non negative number");
    else
        printf("The Reverse of %d is %d",n,reverse(n,len(n)));
    return 0;
}

