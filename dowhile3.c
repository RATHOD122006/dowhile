#include<stdio.h>
main(){
	int a;
	int b=2;
	scanf("%d",&a);
	do{
		printf("%d",b);
        if(a%2==0);
		b=b+2;
	}while(b<=a);
}