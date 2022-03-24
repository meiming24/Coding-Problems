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
	int n,l,r;
	cin >> n;
	int a[n];
	FOR(i,0,n-1) cin >> a[i];
	FOR(i,0,n-2){
		if(a[i] > a[i+1]){
			l = i;
			break;
		}
	}
	FOR(i,1,n-1){
		if(a[i-1] > a[i]){
			r = i;
		}
	}
	reverse(a+l,a+r+1);
	for(int i=0;i<n-1;i++) if(a[i]>a[i+1]) return cout<<"no\n",0;
	cout<<"yes\n"<<l<<' '<<r<<'\n';
	
	return 0;
}

