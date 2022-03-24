#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;
typedef pair<ll,ll> llll;

void Solve(){
	int n;
	cin >> n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i] == a[j]){
				for(int k=i;k<n;k++){
					a[k] = a[k+1];
					i--;
					n--;		
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout << a[i] <<" ";
	}
}

int main(){
	Solve();
}

