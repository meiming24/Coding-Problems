#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int a, b, c, d; 
		cin >> a >> b >> c >> d;
		if(a == b && b == c && c == d && d ==0) return 0;
		int S = a-1;
		S += 3*a;
		if(b < c) S += (c-b);
		else S += (a-(b-c));
		if(c > d) S += (c-d);
		else S += (a-(d-c));
		cout << S << endl;
	}
return 0;
}
