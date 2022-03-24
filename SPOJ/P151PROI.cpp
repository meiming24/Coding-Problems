#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a;
	for(int i=0;i<n;i++){
		cin >> a;
		int sum = 0;
		int mod;
		while(n!=0){
			mod = a%10;
			sum+=mod;
			a=a/10;
		}
		cout <<sum;
	}
}
