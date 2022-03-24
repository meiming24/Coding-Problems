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
int n;
string s;
int main(){
	int t;
	cin >> t;
	bool check = 0;
	while(t--){
		int n;
      	cin>>n;
      	string s;
      	cin>>s;
      	bool res=false;
      	if(n <= 1){
		   	cout<<"-1"<<" "<<"-1"<<endl;
      		res=true;
      	}
      	for(int i=0;i<n-1;i++){
          	if(s[i] != s[i+1]){
              	cout << i+1 << " " << i+2 << endl;
              	res = true;
              	break;
          	}
      	}
      	if(res == false)
      	cout <<"-1"<<" "<<"-1"<< endl;
  	}
  	return 0;
}

