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
int a[100005],vitri[100005],b[100005] = {0},n,m;

int main(){
	cin >> n >> m;
	int a[n];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=n;i>=1;i--){
		if(!vitri[a[i]]){
			b[i]++;	
		}
		vitri[a[i]] = true;
	}
	for(int i=n;i>=1;i--){
		b[i] = b[i] + b[i+1];
	}  
	while(m--){
		int x;
		cin >> x;
		cout << b[x] << endl;
	}
}

