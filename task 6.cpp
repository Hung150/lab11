#include<iostream>
#include<math.h>
using namespace std;
double f=(sqrt(5)+1)/2;
F(int x){ 
return (pow(f,x)-pow(1-f,x))/sqrt(5);
}
main(){ 
int n,i=0;
	cout<<"enter n: "; cin>>n;
	while(n>F(i)){
		i++;
	}
	cout<<i+1;
}
