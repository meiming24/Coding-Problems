#include <iostream>
using namespace std;
 
int main ()
{
	string vote;
	while (1)
	{
		cin>>vote;
		if (vote=="#") break;
		int len=vote.length();
		int countY=0;
		int countN=0;
		int countP=0;
		int countA=0;
		for (int i=0; i<len; i++)
		{
			if (vote[i]=='Y') countY++;
			if (vote[i]=='N') countN++;
			if (vote[i]=='P') countP++;
			if (vote[i]=='A') countA++;
		}
		if ((float)countA>=(float)len/2.0) cout<<"need quorum"<<endl;
		else
		{
			if (countY>countN) cout<<"yes"<<endl;
			else if (countN>countY) cout<<"no"<<endl;
			else cout<<"tie"<<endl;
		}
	}
	return 0;
}
