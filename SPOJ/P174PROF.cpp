#include<bits/stdc++.h>
using namespace std;
int main(){
	long long k;
	int n;
	cin >> n >> k;
	int key;
	string name[1000000];
	long long a[1000000];
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin >> name[i];
		a[i]=a[i-1]+i;
		if(a[i]<=k) key = i;
	}
	sort(name+1,name+1+n);
	if(a[key]==k) cout << name[key];
	else{
		k -= a[key];
		cout << name[k];
	}
}
