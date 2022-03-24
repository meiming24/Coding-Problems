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
	char s[n][m];
	FOR(i,0,n-1)
		FOR(j,0,m-1)
			cin >> s[i][j];
	FOR(i,0,n-1){
		FOR(j,0,m-1){
			if(j%2 == 1){
				s[i][j] = s[i][j] + (24 - (s[i][j-1] - 65));
			}
		}
	}
	FOR(i,0,n-1){
		FOR(j,0,m-1){
			cout << s[i][j];
		}
		cout << endl;
	}
			
}

