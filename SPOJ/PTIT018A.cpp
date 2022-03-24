#include <bits/stdc++.h>
using namespace std;
int n = 1000000;
int check[1000001];
void Sang(){
  for (int i=2;i<=n;i++){
  	check[i] = 1;
  }
  for (int i=2;i<=n;i++){
    if (check[i] == 1) {
      for (int j=2*i;j<=n;j+=i){
        check[j]=0;
      }
    }
  }
}
int main(){
	Sang(); 	
	int t;
	cin >> t;
	int L, R;
	int dem = 0;
	while(t--){
		cin >> a >> b;
		for(int i=L;i<=R-6;i+=5){
			if(check[i]==1){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
