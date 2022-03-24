#include<bits/stdc++.h>
using namespace std;
string Column(long x){
	string temp = "";
	char c;
	while(1){
		if(x==0) break;
		x--;
		c= 'A'+x%26;
		temp+=c;
		x/=26;
	}
	return temp;
}
int main ()
{
    char tmp;
    long r, c;
    while (1)
    {
        cin>>tmp>>r>>tmp>>c;
        if (r==0 && c==0) break;
        cout<<Column(c)<<r<<endl;
    }
    return 0;
}
