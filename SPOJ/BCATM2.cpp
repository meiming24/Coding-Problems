#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, S;
	cin >> n >> S;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int dem = 0;
	for(int i=0;i<n;i++){
		int m=n/a[i];
		dem+=m;
		n=n-a[i]*m;
		if(n==0) break;
	}
	cout <<dem<<endl;
	return 0;
}
