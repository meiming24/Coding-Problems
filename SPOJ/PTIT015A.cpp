#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b, c;
		cin >> a>>b>>c;
		string s = a+b+c;
		sort(s.begin(),s.end(),greater<char>());
		cout << s;
	}
}
