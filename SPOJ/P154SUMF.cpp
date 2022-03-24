#include <iostream>
using namespace std;
int n, p, q, res;
int main()
{
	cin >> n;
	res = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> p >> q;
		if (q - p >= 2) res++;
	}
	cout << res;
}
