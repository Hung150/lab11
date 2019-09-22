#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
double f=(sqrt(5)+1)/2;
int F(int x){ 
return pow(sqrt(5),-1)*(pow(f,x)-(pow(-1,x)/pow(f,x)));
}
int main(){ 
int n,i=0;
	cout<<"enter n: "; cin>>n;
	while(n>F(i)){
		i++;
	}
	cout<<i+1;
}
