#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, k;
	cin >> n >> k;
	if(n==1) cout << "1";
	else {
		if(n%2==0){
			if(k<=n/2){
				cout <<k*2-1;	
			}
			else cout <<k-(n-k);
		}
		if(n%2!=0) {
			if (k<=n/2+1) {
				cout <<k*2-1;	
			}
			else cout <<k-(n+1-k); 
		}
	}
	return 0;
}

