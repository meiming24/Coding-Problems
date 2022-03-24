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
int b[1000][1000]={}
int main(){
    int x = 0;
    for (int i = 1; i <= 5; ++i){
        for (int j = 1; j <= 5; ++j){
            cin >> x;
            if (x == 1){
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
    return 0;
}
