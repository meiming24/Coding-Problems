#include <iostream>
using namespace std;
typedef long long ll;

int main(){
	ll n,m;
	cin >> n >> m;
	ll a[n+5][m+5];
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	ll t;
	cin >> t;
	ll redline;
	cin >> redline;
	while(t--){
		int k;
		cin >> k;
		if(k == 1){
			ll c,c1,r1,c2,r2;
			cin >> c >> c1 >> r1 >> c2 >> r2;
			
			ll check = 0;
			ll res = 0;
			ll dem = 0;
			
			for(ll i=r1;i<=r2;i++){
				for(ll j=c1;j<=c2;j++){
					if(a[i][j] < redline){
						check++;
						break;
					}
				}
			}
			
			if(check){
				cout << "0" << endl;
				continue;
			}
			for(ll i=r1;i<=r2;i++){
				//thu hoach hang chan
				if((i - r1)%2 == 0){
					for(ll j=c1;j<=c2;j++){
						ll collect = a[i][j] - redline;
						if(res + collect <= c){
							res = res + collect;
							a[i][j] = redline;
						}
						else {
							a[i][j] = a[i][j] - (c - res);
							res = c;
							dem++;
							break;
						}
					}
				}
				//thu hoach hang le
				else if((i - r1)%2 == 0){
					for(ll j=c2;j>=c1;j--){
						ll collect = a[i][j] - redline;
						if(res + collect <= c){
							res = res + collect;
							a[i][j] = redline;
						}
						else {
							a[i][j] = a[i][j] - (c - res);
							res = c;
							dem++;
							break;
						}
					}
				}
				if(dem){
					break;
				}
			}
			
			cout << res << endl;
			
		}
		else {
			ll reset;
			cin >> reset;
			redline = reset;
		}
	}
}
