#include<stdio.h>
int main(){
	int a,sum=0,b;
	printf("enter the number to add : ");
	scanf("%d",&a);
	b=a;
	while(a){
		sum=sum+(a%10);
		a=a/10;
	}printf("the sum of the digits in %d is %d",b,sum);
	return 0;
}
