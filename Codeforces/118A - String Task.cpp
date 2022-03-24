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
void Towlow(string a){
	for(int i=0;i<a.length();i++){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i] += 32;
		}
	}
}
int main(){
	string s;
	cin >> s;
  	int n = s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='y'||s[i]=='A'|| s[i]=='E'|| s[i]=='O'|| s[i]=='I'|| s[i]=='U' || s[i]=='Y') continue;
		else{
			s[i] += '.';
		}
	}
	Towlow(s);
	cout << s;
}

