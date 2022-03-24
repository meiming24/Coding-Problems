#include<bits/stdc++.h>
using namespace std;
int main(){
	int C;
	cin >> C;
	int N;
	cin >> N;
	int a[1000];
	for(int i=0;i<N;i++){
		cin >> a[i];
	}
	sort(a, a+N, greater<int>());
	int sum = 0;
	for(int i=0;i<N;i++){
		sum+=a[i];
		if(sum >= C){
			sum =sum - a[i];
			break;
		}
	}
	cout << sum;
	return 0;f
}


