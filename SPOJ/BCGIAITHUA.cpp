#include <bits/stdc++.h>
using namespace std;
int LCD (int a, int b){
	if(b==0) return a;
	else return LCD(b,a%b); 
}
int LCM (int a,int b){
	return a*b/LCD(a,b);
}
int main(){
	int n;
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
		cout << LCD(a,b) <<" "<<LCM(a,b);
	}
	return 0;
}
