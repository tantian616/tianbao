#include<stdio.h>
int main()
{
    printf("enter array a[i][j] :");
    int i,j,max,a[2][3];
    for(i=0;i<2;i++)
    {
     for(j=0;j<3;j++)
     {
         scanf("%d",&a[i][j]);
     }
    }
    max=a[0][0];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>max)
            max=a[i][j];
        }
    }
    printf("max=%d",a[i][j]);
    return 0;
}