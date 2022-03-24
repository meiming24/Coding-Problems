#include<bits/stdc++.h>
using namespace std;
int Check(long long n){
	if(n%100==86) return 1;
	else return 0;
}
int main(){
	long long n,a;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a;
		cout << Check(a) <<endl;
	}
	return 0;
}
