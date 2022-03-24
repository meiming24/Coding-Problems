#include <iostream>
using namespace std;
long n;
void tinh()
{
    cin>>n;
    long res=1;
    for (long i= 2*n-1; i>n; i--)
        if (((long long)i*n)%(i-n)==0)
            res+=2;
    cout << res<<endl;
}
int main()
{
    int t;
    cin>>t;
    for (int i=0; i<t; i++)
        tinh();
    return 0;
}
