#include<stdio.h>
int sowjanya(int a,int b){
	return a+b;
}
int main(){
	printf("enter the values of a and b: \n");
	/*("hey \n");
	printf("HELLO");*/
	int x,y,sum;
	scanf("%d",&x);
	scanf("%d",&y);
	sum=sowjanya(x,y);
	printf("%d",sum);
}
