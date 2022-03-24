#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int dem = 0;
	for(int i=1;i<=n;i++){
		int cs = 0;
		int demS = 0;
		for(int j=0;j<=3;j++){
			cin >> cs;
			if(cs == 1) demS++;
		}
		if(demS>=2) dem++;
	}
	cout << dem;
	return 0;
}
