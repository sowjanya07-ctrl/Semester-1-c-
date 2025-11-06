#include<stdio.h>
int main(){
	int a,b,p=0;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	for(int i=1;i<=b;i++){
		p=p+a;
	}printf(" product of %d and %d is %d",a,b,p);
	return 0;
	
}
