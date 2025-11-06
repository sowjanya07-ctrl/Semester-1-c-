#include<stdio.h>
int main(){
	int num,sum=0;
	//taking the input from user
	printf("enter end no: ");
	scanf("%d",&num);
	//running the loop
	for(int i=1;i<=num;i++){
		sum=sum+i;
	}
	//display the output
	printf("sum is: %d ",sum);
	return 0;
}
