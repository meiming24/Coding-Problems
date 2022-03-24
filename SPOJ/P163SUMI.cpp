#include<bits/stdc++.h>
using namespace std;
string numtostring(int n){
	string tmp="";
	while(n>0){
		tmp=n%10+'0';
		n/=10;
	}
	string s="";
	for(int i=tmp.length()-1;i>=0;i--){
		s+=tmp[i];
	}
	return s;
}
int main(){
	int n;
	cin >> n;
	string s="";
	for (int i=1;i<=n;i++){
		s+=numtostring(i);
	}	
	cout<<s[n-1];
	return 0;
}
