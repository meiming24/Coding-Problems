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
	faster;
	ll n,k,add(0),a[502];
	cin >> n >> k;
	FOR(i,0,n-1) cin >> a[i];
	FOR(i,1,n-1){
		if(a[i] + a[i-1] < k){
			add = add + (k - a[i] - a[i-1]);
			a[i] = k - a[i-1]; 
		}
	}
	cout << add << endl;
	FOR(i,0,n-1){
		cout << a[i] <<" ";
	}
}

