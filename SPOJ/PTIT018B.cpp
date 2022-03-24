#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int a[n],b[n];
		int i;
		for (i=0;i<n;i++) cin >> a[i];
		for (i=0;i<n;i++) cin >> b[i];
		sort(a,a+n);
		sort(b,b+n);
		int flag=1;
		for(i=0;i<n;i++){
			if (a[i]>b[i]){
				flag=0;
				break;
			}
		}
		if (flag==1) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}
