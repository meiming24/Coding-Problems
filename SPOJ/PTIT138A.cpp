#include<bits/stdc++.h>
using namespace std;
int CheckTria(int a, int b, int c){
	if(a+b>c && a+c>b && c+b>a) return 1;
	else return 0;
}
int CheckRiTria(int a, int b, int c){
	if (a>b && a>c && a*a==b*b+c*c) return 1;
	if (b>a && b>c && b*b==a*a+c*c) return 1;
	if (c>a && c>b && c*c==a*a+b*b) return 1;
	return 0;
}
int main(){
	int a,b,c;
	while(1){
		cin >>a>>b>>c;
		if(a==0 && b==0 && c==0) break;
		if( CheckTria(a,b,c)==1 && CheckRiTria(a,b,c)==1){
			cout <<"right"<<endl;
		}
		else cout <<"wrong"<<endl;
	}
	return 0;
}
