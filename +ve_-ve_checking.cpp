#include<stdio.h>
int main()
{
	int number;
	printf("enter a number :");
	scanf("%d",&number);
	printf("%d \n",number);
	if(number>0){
		printf("%d is positive",number);
	}else if(number==0){
		printf("the entered number is zero");
	}else{
		
		printf("%d is negitive",number);
	}
	return 0;
}
