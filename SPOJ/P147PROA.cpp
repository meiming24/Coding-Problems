#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long x,y,z,tich;
	cin>>x>>y>>z;
	tich = sqrt(x*y*z);
	long long a,b,c;
	a = tich/x;
	b = tich/y;
	c = tich/z;
	long long sum;
	sum = (a+b+c)*4;
	cout<<sum;
}
