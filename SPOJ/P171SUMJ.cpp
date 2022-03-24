#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c;
	cin>>a>>b>>c;
	if(a==0){
		if(b==0 && c==0) cout<<-1;
		else if(b==0 && c!=0) cout<<0;
		else{
			cout << "1\n";
			printf("%.5lf",-1.0*(double)c/(double)b);
		} 
	}
	else{
		long long delta = b*b - 4*a*c;
		if(delta<0) cout<<0;
		else if(delta==0){
			cout<<1<<endl;
			printf("%.5lf",-1.0*(double)b/(2.0*(double)a));
		}
		else{
			cout<<2<<endl;
			double T=double(-1.0*(double)b+(sqrt(delta)))/(2*(double)a);
			double K=double(-1.0*(double)b-(sqrt(delta)))/(2*(double)a);
			if(T<K){
				printf("%.5lf\n",T);
			printf("%.5lf",K);
			}
			else{
				printf("%.5lf\n",K);
			printf("%.5lf",T);
			}
	
		}
	}
return 0;
}
