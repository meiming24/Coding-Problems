#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int model = min(n, m);
    cout<<model<<" "<<(max(n, m) - model)/2;
    return 0;
}
