#include<stdio.h>
int main(){
    int a[100],i,n;
    a[0]=0, a[1]=1;
    for(i=2;i<100;i++)
    	a[i]=a[i-1]+a[i-2];
    scanf("%d",&n);
    printf("nth term = %d",a[n-1]);
    return 0;
}