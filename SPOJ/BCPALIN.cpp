#include<bits/stdc++.h>
using namespace std;
int CheckNum (int a[], int n){
	for(int i=0;i<=n/2;i++){
		if(a[i]!=a[n-i-1]) return 0;
	}
	return 1;
}
int NumArr(long a, int arr[]){
	int i = 0;
	long p = 1;
	while (a/p!=0){
		arr[i]=(a/p)%10;
		p=p*10;
		i++;
	}
	return i;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long a;
		cin >> a;
		int arr[10];
		int n;
		n = NumArr (a,arr);
        if (CheckNum(arr,n)==1) printf ("YES\n");
        else printf ("NO\n");
	}
	return 0;
}
