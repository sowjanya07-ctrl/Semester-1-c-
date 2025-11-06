#include<stdio.h>
int main(){
	int sum=0;
	int a[10]={7,9,14,8,10,22,5};
	for(int i=0;i<=10;i++){
		sum=sum+a[i];	
	}printf("%d\n",sum);
	a[3]=18;
	for(int i=0;i<7;i++){
		printf("%d,",a[i]);
	}printf("\n");
	printf("%d\n",a[4]);
	return 0;
}
