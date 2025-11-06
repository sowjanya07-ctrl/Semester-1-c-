#include<stdio.h>
int main(){
	int num;
	char c='*';
	scanf("%d",&num);
	for(int m=num;m>=1;m--){
		for(int n=m;n>=1;n--){
			printf("%c",c);
		}printf("\n");
	}return 0;
}
