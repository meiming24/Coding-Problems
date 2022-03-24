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
	int n,dem1(0),dem2(0),dem3(0),dem4(0);
	int sum(0);
	cin >> n;
	int a;
	while(n--){
		cin >> a;
		if(a == 1) dem1++;
		if(a == 2) dem2++;
		if(a == 3) dem3++;
		if(a == 4) dem4++;
	}
    sum = dem4 + dem3 + dem2/2;
    dem1 = dem1 - dem3;
    if (dem2%2 == 1){
        sum++;
        dem1 = dem1 - 2;
    }
    if (dem1 > 0){
        sum += (dem1 + 3) / 4;
    }
    cout << sum;
    return 0;
}

