#include<bits/stdc++.h>
using namespace std;
int main(){
	int ms[9];
	for(int i=1;i<=8;i++){
		cin >> ms[i];
	} 
	int Up=1;
	int Down=1;
	for (int i=1; i<8; i++)
    {
        if (ms[i]>ms[i+1])  Up=0;
        if (ms[i]<ms[i+1])  Down=0;
    }
    if(Up==1 && Down==0) cout <<"ascending";
    else if(Up==0 && Down==1) cout <<"descending";
    else cout <<"mixed";
    return 0;
}
