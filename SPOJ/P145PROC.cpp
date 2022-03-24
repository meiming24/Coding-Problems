#include <stdio.h>
#include <memory.h>
using namespace std;
 
int main()
{
    int i,sum=0,x, a[43];
    memset(a,0,sizeof(a));
    for (i=1; i<=10; i++)
    {
        scanf("%d",&x);
        a[x%42]++;
    }
    for (i=0; i<=42; i++)
        if (a[i]!=0) sum++;
    printf("%d",sum%42);
}
