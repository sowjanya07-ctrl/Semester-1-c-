#include<stdio.h>
int main()
{
	int a,sum=0,b;
	printf("enter a number to check : ");
	scanf("%d",&a);
	b=a;
	while(a){
		sum=(sum*10)+(a%10);
		a=a/10;	
	}if(sum==b){
		printf("palindrome");
	}else{
		printf("not a palindrome");
	}
	return 0;
}
