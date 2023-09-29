#include<stdio.h>
int main()
{
    int n,a[100][100],b[100][100],c[100][100],m,i,j;
    printf("Enter the row of Matrix A AND B:");
    scanf("%d",&n);

    printf("Enter the column of Matrix A  AND B:");
    scanf("%d",&m);
    printf("ENTER THE ELMENTS OF MATRIX A :");

    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
        }
     printf("ENTER THE ELMENTS OF MATRIX B :");
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
        }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i][j]=(a[i][j]+b[i][j]);
        }
    }
    printf("New Array is :\n");
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                    printf("%d\t",c[i][j]);
            }printf("\n");

    }
return 0;
}
