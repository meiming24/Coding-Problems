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
	while(t--){
		long long n; 
        cin >> n ; 
        string s; 
        cin >> s ; 
        vector<long long>ppr; 
        char array[n+10][n+10]; 
        long long Count_2 = 0; 
        for(int i=0;i<n;i++) { 
            Count_2+=(s[i]=='2'); 
            if(s[i]=='2') { 
                ppr.push_back(i); 
            } 
        } 
        memset(array,'.',sizeof array); 
        if(Count_2<=2 && Count_2) { 
            cout << "NO\n"; 
        } 
        else { 
            cout << "YES\n"; 
            for(int i=0;i<s.size();i++) { 
                if(s[i]=='1') { 
                    for(int j=0;j<n;j++) { 
                        array[i][j]='='; 
                        array[j][i]='='; 
                    } 
                } 
            } 
            for(int i=0;i<ppr.size();i++) { 
                for(int j=0;j<ppr.size();j++) { 
                    if(i==j){continue;} 
                    if(array[ppr[i]][ppr[j]]=='.') { 
                        array[ppr[i]][ppr[j]] ='='; 
                        array[ppr[i]][ppr[j]] = '='; 
                    } 
                } 
                if(i==ppr.size()-1) { 
                    array[ppr[i]][ppr[0]]='+'; 
                    array[ppr[0]][ppr[i]]='-'; 
                } 
                else{ 
                    array[ppr[i]][ppr[i+1]]='+'; 
                    array[ppr[i+1]][ppr[i]]='-'; 
                } 
            } 
            for(int i=0;i<n;i++) { 
                array[i][i]='X'; 
                for(int j=0;j<n;j++) { 
                    cout <<array[i][j]; 
                } 
                cout << '\n'; 
            } 
        }
}
	return 0;
}

