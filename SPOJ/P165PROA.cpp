#include<bits/stdc++.h>
using namespace std;
struct data{
	char c;
	int vt;
};
 
bool cmp(data a, data b){
	if (a.c>b.c) return true;
	else if (a.c==b.c){
		if (a.vt<b.vt) return true; 
	}
	return false;
}
int main(){
	string s;
	cin>>s;
	vector <data> ds;
	for (int i=0;i<s.length();i++){
		data tmp;
		tmp.c=s[i];
		tmp.vt=i;
		ds.push_back(tmp);
	}
	sort(ds.begin(),ds.end(),cmp);
	int vtt=-1;
	for(int i=0;i<ds.size();i++){
		if (ds[i].vt>vtt){
			vtt=ds[i].vt;
			cout<<ds[i].c;
		}
	}
return 0;
}
