#include<stdio.h>
int main()
{
    int yr;
    printf("Enter any Year :");
    scanf("%d",&yr);
    if(yr%4==0){
        if(yr%100!=0)
            printf("Leap Year");
        else
            printf("Not a Leap Year");

    }
    else if(yr%400==0){
        printf("Leap Year");

    }
    return 0;
}
