#include <bits/stdc++.h>
using namespace std;
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
string ns;
int ni,decns=0;
cin>>ns>>ni;

for(int i=0;i<ns.length();i++){
int c=ns[i]-'0';
if(c==ni){
       	cout<<"YES\n";
	return 0;
}
}
decns=stoi(ns);
if(decns%ni==0){
	cout<<"YES\n";
}
else{
	cout<<"NO\n";
}
	return 0;
}
