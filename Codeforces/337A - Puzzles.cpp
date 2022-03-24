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

int main(){
	int n,m;
	cin >> n >> m;
	int a[m];
	for(int i=0;i<m;i++){
		cin >> a[i];
	}
	sort(a,a+m);
	int res = a[n-1] - a[0];
	for(int i=1;i<=m-n;i++){
		if(a[i+n-1] - a[i] < res) res = a[i+n-1] - a[i];
	}
	cout << res;
}

