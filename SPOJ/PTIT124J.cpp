#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    while (s.length()%3!=0){
        s = '0'+s;
    }
    string check="";
    for (int i=0; i<s.length(); i+=3){
        check="";
        for (int j=i; j<i+3; j++) {
            check+=s[j];
        }
        if (check=="000") cout<<"0";
        if (check=="001") cout<<"1";
        if (check=="010") cout<<"2";
        if (check=="011") cout<<"3";
        if (check=="100") cout<<"4";
        if (check=="101") cout<<"5";
        if (check=="110") cout<<"6";
        if (check=="111") cout<<"7";
    }
    return 0;
}
