#include <string.h>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char a[50001];
    long count=0,tong=0;
    cin >> a;
    for(long i=0;i<strlen(a)-1;i++)
        if(a[i]==')'&&a[i+1]==')')
            count++;
    for(long i=0;i<strlen(a);i++)
    {
        if(a[i]=='('&&a[i+1]=='(')
            tong+=count;
        if(a[i]==')'&&a[i+1]==')')
            count--;
    }
    cout << tong;
}
