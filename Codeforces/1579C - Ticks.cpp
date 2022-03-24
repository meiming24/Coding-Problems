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
void solve(){
	int n,m,k,dem(0);
	cin >> n >> m >> k;
	char a[n][m],b[n][m];
	FOR(i,0,n-1){
		FOR(j,0,m-1){
            cin >> a[i][j];
            b[i][j] = '.';
        }
    }
	FOR(i,0,n-1){
		FOR(j,0,m-1){
			if(a[i][j] == '.') continue;
			int l = 1;
			while(i >= l && j >= l && j < m - l && a[i-l][j-l] == '*' && a[i-l][j+l] == '*'){
				l++;
			}
			l--;
			if(l >= k){
				FOR(c,0,l){
					b[i-c][j-c] = '*';
					b[i-c][j+c] = '*';
				}
			}
		}
	}
	FOR(i,0,n-1)
        FOR(j,0,m-1)
            if(a[i][j] != b[i][j]){
                cout <<"NO"<< endl;
                return;
            }
    cout <<"YES"<< endl;
}
int main(){
	faster;
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

