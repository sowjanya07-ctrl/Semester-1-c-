#include<stdio.h>
int main(){
	int n;
	printf("size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("enter elemnts of array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int update,index;
	printf("the value to change : ");
	scanf("%d",&update);
	scanf("%d",&index);
	a[index]=update;
	printf("enter elemnts of array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
	
	
	
	
	
	
	
	
	
	
