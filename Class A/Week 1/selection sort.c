#include<stdio.h>
int main()
{
int a[10],i,j,t,n;
printf("enter no. of elements :");
scanf("%d",&n);
printf("enter elements :\n");
for(i=0;i<n;i++)
        scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
        int min=a[i],index=i;
        for(j=i+1;j<n;j++)
        {
                if(min>a[j])
                {
                        min=a[j];
                        index=j;
                }
        }
        t=a[i];
        a[i]=a[index];
        a[index]=t;
}
printf("sorted array :\n");
for(i=0;i<n;i++)
        printf("%d ",a[i]);
printf("\n"
return 0;
}