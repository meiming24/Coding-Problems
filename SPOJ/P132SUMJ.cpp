#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
void khoitao(int arr[],int n){
	for(int i=1;i<=n;i++){
		arr[i]=i;
	}
}
void xuat(int arr[],int n){
	for (int i=1;i<=n;i++){
		cout<<arr[i];
	}
}
bool check(int arr[],int n){
	for (int i=1;i<n;i++){
		if(arr[i]<arr[i+1]) return false;
	}
	return true;
}
int main(){
	string s;
	cin>>s;
	int n;
	for(int i=0;i<s.length();i++){
		arr[i+1]=(s[i]-'0');
		n=i+1;
	}
	if (check(arr,n)){
		cout<<0;
		return 0;
	}else{
		while (check(arr,n)==false){
			int i;
			for (i=n;i>0;i--){
				if (arr[i]>arr[i-1]) break;
			}
			i--;
			for (int j=n;j>=i;j--){
				if (arr[j]>arr[i]){
					swap(arr[i],arr[j]);
					sort(arr+i+1,arr+n+1);
					xuat(arr,n);	
					break;
				}
			}
			break;
		}
	}
return 0;
}
