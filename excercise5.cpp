#include<iostream>
using namespace std;
int main(){
	int a,b,k;
	cout<<" enter positive integer a = "; cin>>a;
	cout<<" enter positive integer b = "; cin>>b;
	while(b!=0){
		int t=b;
		b=a%b;
		a=t;
	}
	cout<<" greatest common divisor = "<<a;
}
