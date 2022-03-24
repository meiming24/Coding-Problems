#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int a[5000];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int dem=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==m){
				dem++;
			}
		}
	}
	cout << dem;
}
