#include<bits/stdc++.h>
using namespace std;
long giaithua(int n){
	if(n==1) return n;
	else return n*giaithua(n-1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		long tong = s[s.length()-1]-'0';
		int k=2;
		for (int i=s.length()-2;i>=0;i--){
			tong+=(s[i]-'0')*giaithua(k);
			k++;
		}
		cout<<tong<<endl;
	}
}
