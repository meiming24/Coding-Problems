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
	ll n,sum(0),cnt(0),res(0);
	cin >> n;
	ll a[n];
	for(int i=1;i<=n;i++){
		cin >> a[i];
		sum+=a[i];
	}
	sort(a+1,a+1+n);
	sum=sum/2;
	for(int i=n;i>=1;i++){
		res += a[i];
		cnt++;
		if(res > sum) break;
	}
	cout << cnt << endl;
}

