#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,sum=0;
	printf(" enter length a"); scanf("%i", &a);
	printf(" enter length b"); scanf("%i", &b);
	while(a-sum>=b)
		sum+=b;
	printf("the length of the unoccupied part of segment a is %i",a-sum);
	return 0;
}
