#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10]={500,200,100,50,20,10,5,2,1};
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int dem = 0;
		for(int i=0;i<9;i++){
			int m=n/a[i];
			dem+=m;
			n=n-a[i]*m;
			if(n==0) break;
		}
		cout <<dem<<endl;
	}
	return 0;
}
