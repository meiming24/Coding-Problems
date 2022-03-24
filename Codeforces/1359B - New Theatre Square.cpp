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
	int t;
	cin >> t;
	while(t--){
		int n,m,x,y;
		cin >> n >> m >> x >> y;
		ll sum = 0;
		char s[10005][10005];
		for(int i=0;i<n;i++){
			cin >> s[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(s[i][j] == '.' && j+1<m && s[i][j] == '.'){
					sum += (ll)min(2*x,y);
				}
				else if(s[i][j] == '.'){
					sum += (ll)x;
				}
			}
		}
		cout << sum << endl;
	}
}

