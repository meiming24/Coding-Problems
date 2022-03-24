#include <iostream>
using namespace std;
 
int main ()
{
    int n;
    cin>>n;
    long arr[100005];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int arr2[100005];
    arr2[0] = 1;
    for (int i=1; i<n; i++)
    {
        if (arr[i]>=arr[i-1])
            arr2[i] = arr2[i-1]+1;
        else
            arr2[i]=1;
    }
    int Dmax = 0;
    for (int i=0; i<n; i++)
    {
        if (arr2[i]>Dmax) Dmax = arr2[i];
    }
    cout<<Dmax;
    return 0;
} 

