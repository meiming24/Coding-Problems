#include<bits/stdc++.h>
using namespace std;
int CheckPrime(long long a){
	if (a<2) return 0;
	for (long i=2; i<=sqrt(a); i++)
	{
		if (a%i==0) return 0;
	}
	return 1;
}
int Solu(long long n){
	long long x = sqrt(n);
	if(x*x==n && CheckPrime(x)==1){
		return 1;
	}
	else return 0;
}
int main(){
	long n;
	cin >> n;
	long long a[100005];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for (long i=1; i<=n; i++)
	{
		if (Solu(a[i])==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
