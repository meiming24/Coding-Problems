#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int cha[10000], rank[10000];
void create(int n){
	for(int i=0;i<n;i++){
		cha[i] = i;
		rank[i] = 0;
	}
}
int findroot(int u){
	if(cha[u] != u) cha[u] = findroot(cha[u]);
	return cha[u];
}
void join(int u, int v){
	u = findroot(u);
	v = findroot(v);
	if(u == v) rank[u]++;
	if(rank[u] < rank[v]) cha[u] = v;
	else cha[v] = u;
}
int main(){
	int n;
	cin >> n;
	create(n);
	int x,y,z;
	while(n--){
		cin >> x >> y >> z;
		if(z == 1){
			join(x,y);
		}
		else{
			if(cha[x] != cha[y]){
				cout <<"0"<< endl;
			}
			else{
				cout <<"1"<<endl;
			}
		}
	}
	return 0;
}

