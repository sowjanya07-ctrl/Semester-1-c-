#include<stdio.h>
int sowji(int n)
{
	if(n==0){
		return 0;
	}else{
		return n+sowji(n-1);
	}
}
int main(){
	int n;
	printf("Enter the no : ");
	scanf("%d",&n);
	printf("%d",sowji(n));
	return 0;
}
