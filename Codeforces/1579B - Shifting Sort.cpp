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
	int n;
    cin >> n;
    vector <int> a(n);
    FOR(i,0,n-1) cin >> a[i];
    vector <vector <int> > s;
   	FOR(i,0,n-1){
        int submax = max_element(a.begin(), a.end()) - a.begin();
        if (submax != n - i - 1) {
          s.push_back({submax + 1, n - i, 1});
		} 
		a.erase(a.begin() + submax);
	}
	//last size
	cout << s.size() << endl;
	for(auto i : s){
		cout << i[0] <<" "<< i[1] <<" "<< i[2] << endl;
	}
}
int main(){
	int t ; cin >> t;
	while(t--){
		solve();
	}
}

