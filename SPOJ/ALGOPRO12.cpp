#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	long long d=1;
	cin >> n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			long long k=0;
			while(n%i==0){
				n/=i;
				k++;
			}
			d*=2*k+1;
		}
	}
	if(n>1) d*=3;
	cout<<d<<endl
	return 0;
}
