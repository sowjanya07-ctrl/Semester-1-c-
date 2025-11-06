#include<stdio.h>
int main(){
	int n;
	printf("size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("enter elemnts of array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}printf("the array is:");
	for(int i=0;i<n;i++){
		printf("%d,",a[i]);
		
	}printf("\n");
	int min=a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}printf("the minimum element in array is:%d",min);
	return 0;
}

