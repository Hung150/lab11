#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int k=0;
	double s=1000,p;
	cout<<"enter percents p(0<p<25) "; cin>>p;
	if(p<=0||p>=25){ cout<<"error";
	}else{
		while(s<=1100){
			s=s+s*p/100;
			k++;
		}
	}
	printf("after %i months the deposit size will exceed 1100 rubles",k);
	cout<<"the total deposit size s = "<<s;
}
