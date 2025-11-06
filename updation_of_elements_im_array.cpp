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
	printf("the array is : ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}printf("\n");
	
	int update,index;
	printf("the value to update : ");
	scanf("%d",&update);
	printf("index to change : ");
	scanf("%d",&index);
	
	a[index]=update;
	printf("the updated array is : ");
	for(int i=0;i<n;i++){
		printf("%d,",a[i]);
	}
}
	
	
	
	
	
	
	
	
	
	
