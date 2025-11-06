//write a c program to find square root of a number
#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	printf("the square root of the number %d is %.3f",num,sqrt(num));
	return 0;
}
