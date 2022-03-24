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

int64_t solve(int64_t n){
	int64_t sum = 0;
	while(n > 0){
		n = n / 2;
		sum += n;
	}
	return sum;
}
int main(){
	int64_t l,r;
	cin >> l >> r;
	cout << solve(r) - solve(l) - 1;
}

