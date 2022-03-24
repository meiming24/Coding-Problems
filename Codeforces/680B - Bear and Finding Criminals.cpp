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
	ll n,c1(0),c2(0);
	cin >> n;
	ll a[n];
	FOR(i,0,n-1){
		cin >> a[i];
		if(a[i] == 0) c1++;
		else c2++;	
	}
	if(c2 >= 9 && c1 > 0){
		for(int i=0;i<(c2/9)*9;i++){
			cout <<"5";
		}
		for(int i=0;i<c1;i++){
			cout <<"0";
		}
	}
	else cout <<"0";
}

