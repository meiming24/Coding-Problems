#include<bits/stdc++.h>
using namespace std;
int grid_paths(int n,int m){
	if(n==1 || m==1) return 1;
	else return grid_paths(n,m-1) + grid_paths(n-1,m);
}
int main () {
	int n, m;
	cin >> n >> m;
	cout << grid_paths(n,m);
	return 0;
}

