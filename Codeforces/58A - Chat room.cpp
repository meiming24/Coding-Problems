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
	string a,b = "hello";
	cin >> a;
	int j(0),cnt(0);
	for(int i=0;i<a.length();i++){
		if(a[i] == b[j]){
			j++;
			cnt++;
		}
		if(cnt == 5){
			break;
		}
	}
	if(cnt == 5) cout <<"YES"<<endl
	else cout <<"NO"<<endl;
}

