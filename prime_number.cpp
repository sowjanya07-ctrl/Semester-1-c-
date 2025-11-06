#include<stdio.h>
int main()
{
	int a,i,count=0;
	printf("enter a value to check : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(a%i==0){
			count=count+1;
		}
	}if(count==2){
		printf("prime");
	}else{
		printf("not a prime");
	}return 0;
}
