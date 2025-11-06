//simulate a calculator using switch case

#include<stdio.h>
int main(){
	char o;
	int a,b;
	printf("enter the operation(+,-,*,/) : ");
	scanf("%c",&o);
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	switch(o){
		case'+':
			printf("%d + %d =%d",a,b,a+b);
			break;
		case'-':
			printf("%d - %d =%d",a,b,a-b);
			break;
		case'*':
			printf("%d * %d =%d",a,b,a*b);
			break;
		case'/':
			printf("%d / %d =%d",a,b,a/b);
			break;
		default:
			printf("invalid operator");	
	}return 0;
}
