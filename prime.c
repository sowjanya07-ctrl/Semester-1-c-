#include<stdio.h>
//checking the given number is prime or not
int main()
{
	int number;
	printf("enter a number to check");
	scanf("%d",&number);
	int i=1;
	int count=0;
	while(i<=number){
		if(number%i==0){
			count=count+1;
		}i++;
	}
	if(count==2){
		printf("%d is a prime",number);
	}else{
		printf("%d is not a prime",number);
	}
	return 0;
		
	

}
