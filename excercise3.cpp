#include<iostream>
using namespace std;
int sum(int x)
{
	return x*(x+1)/2;
}
int main()
{
	int n;
	cout << "N = "; cin>>n;
	int k = 2;
	while (sum(k)<n)
	{
		k++;
	}
	cout << " k = " << k << endl;
	cout << "sum = " << sum(k);
}
