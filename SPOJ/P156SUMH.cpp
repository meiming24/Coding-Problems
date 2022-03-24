#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a-i;j+=2){
			cout <<"*";
		}
		for(int j=1;j<=2*i-1;j++){
			cout<<"D";
		}
		cout<<endl;
	}
	for(int i=a-1;i>=1;i--){
		for(int j=a-i;j>=1;j--){
			cout<<"*";
		}
		for(int k=1;k<=2*i-1;k++){
			cout<<"D";
		}
		cout<<endl;
	}
	return 0;
}
