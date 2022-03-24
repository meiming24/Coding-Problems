#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
	string xau;
	cin>>xau;
	int count1=0, count2=0;
	for (int i=0; i<xau.length(); i++)
	{
		if (xau[i]>='a' && xau[i]<='z'){
			count1++;
		}
		else count2++;
	}
	if (count1>=count2){
		for (int i=0; i<xau.length(); i++){
			if (xau[i]>='A' && xau[i]<='Z'){
				xau[i]=xau[i]+32;
			}
		}
	}
	else {
		for (int i=0; i<xau.length(); i++)
		{
			if (xau[i]>='a' && xau[i]<='z')
			{
				xau[i]=xau[i]-32;
			}
		}
	}
	cout<<xau;
	return 0;
}
