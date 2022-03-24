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
    ll n,t;
    while(cin >> n >> t){
        if(n==1 && t==10) cout <<"-1"<< endl;
        else if(n>=2 && t==10){
            for(ll i=1;i<n;i++){
                cout <<"1";
            }
            cout <<"0"<< endl;
        }
        else{
            for(ll i=1;i<=n;i++){
                cout << t;
            }
            cout << endl;
        }
    }
    return 0;
}

