#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int dem = 0;
	string s1;
	string s ="";
	cin >> s1;
	if(n==1){
		cout << s1;
		return 0;
	}
	bool flag = true;
	for (int i=1;i<n;i++){
		string s2;
		cin>>s2;
		if (s2 == s1) dem++;
		else if (flag == true){
			s+=s2;
			flag=false;	
		}
	}
	if(dem>=n/2) cout <<s1;
	else cout <<s;
}
