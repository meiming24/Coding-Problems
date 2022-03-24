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
	int t;
	cin >> t;
	int check = 0;
	while(t--){
		int n,i,d;
		int e=0,o=0,f=0;
        cin>>n;
        int a[n+9];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
                o++;
            else
                e++;
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            d=a[i]-a[i-1];
            if(d==1)
            {
               f=1;
               break;
            }
        }
        if(e%2!=o%2)
        cout<<"NO"<<endl;
        else if(e%2==0&&o%2==0)
        cout<<"YES"<<endl;
        else if (e%2==1&&o%2==1&&f==1)
          cout<<"YES"<<endl;
            else
          cout<<"NO"<<endl;
	}
}

