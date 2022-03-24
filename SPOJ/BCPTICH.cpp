#include<bits/stdc++.h>
using namespace std;
long dem(long n){
	long d=0;
	n=n*2;
	for(long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			long j=n/i;
			if((j>i)&&((j-i)%2!=0)) d++;
		}
	}
	return d;
}
int main(){
	long t, stt, n;
	cin >> t;
	while(t--){
		cin >> stt >> n;
		cout << stt <<" "<<dem(n)<<endl;
	}
}
