#include<stdio.h>
int main()
{
	int i=1,n;
	scanf("%d",&n);
	while(i<=20){
		printf("%d * %d = %d\n",n,i,i*n);
		i=i+1;
	}return 0;
}
