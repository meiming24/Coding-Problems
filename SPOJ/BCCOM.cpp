#include<bits/stdc++.h>
using namespace std;
long long Check (long long n){
	long long sum = 0;
	long long a;
    while(n>9){
    	a = n%10;
    	sum = sum + a;
    	n=n/10;
	}
	return sum+n;
}
int main(){
	long long n;
	cin >> n;
	while(n--){
		long long a;
		cin >> a;
		cout << Check(a);
	}
}
