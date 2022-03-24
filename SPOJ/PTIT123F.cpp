#include <bits/stdc++.h>
using namespace std;
int DrunkMan(int n){
	int arr[102];
    for (int i=1; i<=n; i++)
    {
        if (i==1)
        {
            for (int j=1; j<=n; j++)
                arr[j] = 0;
        }
        else
        {
            for (int j=1; j<=n/i; j++)
            {
                if (arr[i*j]==0) arr[i*j] = 1;
                else arr[i*j] = 0;
            }
        }
    }
    int count = 0;
    for (int i=1; i<=n; i++)
        if (arr[i]==0) count++;
    return count;
}
int main(){
	int n;
	cin >> n;
	int a;
	for(int i=1;i<=n;i++){
		cin >> a;
		cout << DrunkMan(a) <<endl;
	}
	return 0;
}
