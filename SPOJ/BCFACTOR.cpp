#include<bits/stdc++.h>
using namespace std;
int CheckPrime(long a){
	if(a<=1) return 0;
	else {
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0) return 0;
		}
	}
	return 1;
}
int main(){
	long n;
	cin >> n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(CheckPrime(i)==1){
				int dem = 0;
				while (n%i==0){
					n=n/i;
					dem ++;
				}
				cout <<i<<" "<<dem;
				cout <<endl;
			}
		}
	}
}
