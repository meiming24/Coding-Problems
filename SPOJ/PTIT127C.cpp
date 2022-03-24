#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],b[n],i,j;
	for (i=0;i<n;i++)
		cin>>a[i]>>b[i];
	sort(a,a+n);
	sort(b,b+n);
	int counter=1;
	i=0;
	for (j=1;j<n;j++){
		if(a[j]>=b[i]){
			counter++;
			i=j;
		}
	}
	cout<<counter;
	return 0;
}
 
