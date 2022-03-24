#include <iostream>
using namespace std;
int Check(string a, string b){
	for (int i=2; i>=0; i--){
		if (a[i]>b[i]) return 1;
		if (a[i]<b[i]) return -1;
	}
}
int main ()
{
	string a, b;
	cin>>a>>b;
	if (Check(a,b)==1) for (int i=2; i>=0; i--) cout<<a[i];
	else for (int i=2; i>=0; i--) cout<<b[i];
	return 0;
}
