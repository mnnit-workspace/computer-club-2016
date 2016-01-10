#include<stdio.h>
int main(){
    int a[10],i,s,n,flag=0;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
    }
    printf("Enter the number to be search: ");
    scanf("%d",&s);
    for(i=0;i<n;i++) {
    	if(a[i]==s){
    		flag=1;
    		break;
    	}
    }
    if(flag==1)
    	printf("Yes, %d",i);
    else 
    	printf("No");
    return 0;
}