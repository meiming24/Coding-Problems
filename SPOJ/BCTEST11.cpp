#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int dem1 = 0;
	int dem2 = 0;
	int a[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	for(int i=0;i<14;i++){
		if(n%a[i]==0) dem1++;
		else dem2++;
	}
	if(dem1 == 0) cout <<"NO";
	else cout <<"YES";
}

