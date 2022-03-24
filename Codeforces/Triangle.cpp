#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	cout <<"Enter 3 edges of the triangle: ";
	cin >> a >> b >> c;
	if(a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) return 1;	
	else return 0;
} 

