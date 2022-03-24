#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

bool check[10000];
int truoc[100000];
vector <ll> ke[100000];
void BFS(int u){
	queue <ll> c;
	c.push(u);
	check[u] = false;
	while(!c.empty()){
		int s = c.front();
		c.pop();
		cout << s <<" ";
		for(int i=0;i<ke[s].size();i++){
			int v = ke[s][i];
			if(check[v]){
				c.push(v);
				check[v] = false;
				truoc[v] = s;
			}
		}
	}		
}

int main(){
int n,k;
	cin >> n >> k;
	//dsach ke
	int a[k], b[k];
	// duong di khong bi dong
	for(int i=0;i<k;i++){
		cin >> a[i] >> b[i];
		ke[a[i]].push_back(b[i]);
		ke[b[i]].push_back(a[i]);
	}
	
	int m;
	cin >> m;
	int dau, dich;
	// noi nhan vien dang dung va muon den
	while(m--) {
		cin >> dau >> dich;
		int u = dich;
		int d[10000];
		int e = 0;
		while(u!=dau){
			e++;
			d[e] =  u;
			u = truoc[u];
		}
		e++;
		d[e] = e;
		cout << e-1;
	}
	BFS(dau);
}

