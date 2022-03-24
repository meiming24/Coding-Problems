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
	string s;
	cin >> s;
	char res;
	bool check = true;
	for(int i=1;i<s.length();i++){
		if(islower(s[i])){
			check = false;
		}
	}
	if(check == true){
		for(int i=0;i<s.length();i++){
			if(islower(s[i])){
				res = toupper(s[i]);
			}
			else res = tolower(s[i]);
			cout << res;
		}
	}
	else cout << s;
	return 0;
}

