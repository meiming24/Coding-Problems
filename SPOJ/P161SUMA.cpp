#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a, b;
	cin >> a >> b;
	long long r;
	long long res = 0;
	while(b){
		res+=a/b;
		r=a%b;
		a=b;
		b=r;
	}
	cout<<res; 
	return 0;
}

 
