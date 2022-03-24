#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int minB = 5000;
    for (int i=0; i<=n/3; i++){
        int kg = i*3;
        int kgRe = n - kg;
        if (kgRe%5==0){
            int B = i + kgRe/5;
            if (B<minB){	
                minB = B;
            }
        }
    }
    if (minB==5000) cout<<-1;
    else cout<<minB;
    return 0;
}
