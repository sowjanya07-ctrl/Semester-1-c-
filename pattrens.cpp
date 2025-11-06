#include<stdio.h>
int main()
{
	int a,i,j;
	char s='*';
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			printf("%c ",s);
		}printf("\n");
	}return 0;
}
