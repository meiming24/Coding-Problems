#include<bits/stdc++.h>
using namespace std;
#define max 100000
int main(){
	long long n, k , a[max];
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	long long s=0;
	for(int i=0;i<=k;i++){
		s+=a[i];
	}
	for(int i=k+1;i<n;i++){
		s-=a[i];
	}
	cout <<s;
	return 0;
}
