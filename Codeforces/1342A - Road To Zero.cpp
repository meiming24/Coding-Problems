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
	int t; cin >> t;
	while(t--){
		ll x,y,a,b;
		cin >> x >> y >> a >> b;
		if(x > y){
			swap(x,y);	
		}
		ll min1(0),min2(0); 
		min1 = x*a + y*a;
		ll z = y - x;
		min2 = z*a + x*b;
		cout << min(min1,min2) << endl;
	}
	return 0;
}

