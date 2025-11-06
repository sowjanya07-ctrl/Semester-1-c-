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
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[0]>a[i]){
			max=a[0];
		}else{
			max=a[i];
		}
	}printf("the maximum value in the given array is:%d\n",max);
	
	return 0;
}
