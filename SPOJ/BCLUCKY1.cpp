#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
    long long n;
    for(int i=1;i<=a;i++){
    cin >> n;
    int count = 0;
    while (n != 0){
        if (n % 10 == 4 || n % 10 == 7){
            count += 1;
        }
        n /= 10;
    }
    if (count == 4 || count == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
    return 0;
}