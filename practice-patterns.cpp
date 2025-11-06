#include<stdio.h>
int main(){
	int num;
	char c='*';
	printf("enter number of lines to print : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			printf("%c",c);
		}printf("\n");
	}return 0;
}

