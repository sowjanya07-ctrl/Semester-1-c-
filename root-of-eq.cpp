#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,discriminent,root1,root2,real,img;
	
	printf("enter values of a,b,c");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	
	discriminent=b*b-(4*a*c);
	
	
	if(discriminent>0){
		root1= (-b+sqrt(discriminent))/(2*a);
		root2= (-b-sqrt(discriminent))/(2*a);
		printf("root1= %.2lf root2= %.2lf",root1,root2);
	}
	
	else if(discriminent==0){
		root1=root2= -b/(2*a);
		printf("root1=root2 : %.2lf ",root1);
		
	}
	
	else if(discriminent<0){
		real=-b/(2*a);
		img=sqrt(-discriminent)/(2*a);
		printf("root1=%.2lf+%.2lfi and root2=%.lf+%.2lfi ",real,img);
	}
	
	else{
		printf("invalid input");
	}
	
	return 0;	
}
