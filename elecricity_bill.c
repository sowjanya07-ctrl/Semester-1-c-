//electricity bill
#include<stdio.h>
int main()
{
	int units,price,amount;
	printf("enter the units used: ");
	scanf("%d",&units);
	if(units<=50){
		price=20;
		amount=units*price;
		printf("your electricity bill is: %d",amount);
	}else if(units<=100){
		price=30;
		amount=units*price;
		printf("your electricity bill is: %d",amount);
	}else if(units<=200){
		price=40;
		amount=units*price;
		printf("your electricity bill is: %d",amount);
	}else if(units>200){
		price=50;
		amount=units*price;
		printf("your electricity bill is: %d",amount);
	}else{
		printf("invalid input");
	}
	return 0;
}
