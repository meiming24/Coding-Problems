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
	int x,y,z;
	int sumx = 0,sumy = 0,sumz = 0;
	int n;
	cin >> n;
	while(n--){
		cin >> x >> y >> z;
		sumx += x;
		sumy += y;
		sumz += z;
	}
	if(sumx == 0 && sumy == 0 && sumz == 0) cout <<"YES"<<endl;
	else cout <<"NO"<<endl;
	return 0;
}

