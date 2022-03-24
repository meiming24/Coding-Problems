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
	int s,n,a,b;
	cin >> s >> n;
	vector <pair <int,int > > v;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}	
	sort (v.begin(),v.end());
	for(int i=0;i<n;i++){
		if(s <= v[i].first){
			cout <<"NO";
			return 0;
		}
		else {
			s+= v[i].second;
		}
	}
	cout << "YES";
}

