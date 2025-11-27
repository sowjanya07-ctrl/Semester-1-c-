#include<stdio.h>
int main(){
	int i;
	char s[100];
	printf("enter a sentence : ");
	fgets(s,sizeof(s),stdin);
	printf("%s\n",s);
	int v=0,c=0,d=0,p=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
		s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
			v=v+1;
		}else if(s[i]<=0 && s[i]>=9){
			d=d+1;
		}else if(s[i]==' '){
			p=p+1;
		}else{
			c=c+1;
		}
	}
		printf("The no of vowels are :%d\n",v);
		printf("The no of consonants are :%d\n",c);
		printf("The no of digits are :%d\n",d);
		printf("The no of spaces are :%d\n",p);
		return 0;
	}
