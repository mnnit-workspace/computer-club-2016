#include<stdio.h>
int freq[101]={0};
int main() {
	int n,i,a[100],j;
	printf("enter no. of elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++) 
		freq[a[i]]++;
	
	for(i=0;i<=100;i++) {
		if(freq[i]>0)
		{
			for(j=0;j<freq[i];j++)
				printf("%d ",i);
		}
	}
	return 0;
}