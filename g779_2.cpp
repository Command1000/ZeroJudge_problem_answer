#include <bits/stdc++.h>
using namespace std;
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
string x,y;
cin>>x>>y;
for(int i=0;i<x.length();i++){
if(x[i]==y[0]){
	cout<<"YES\n";
	return 0;
}
}
int yp=y[0]-'0';
int remainder=0;
for(int i=0;i<x.length();i++){
int xp=x[i]-'0';
remainder=(remainder*10+xp)%yp;
}
if(remainder==0){
	cout<<"YES\n";
}
else{
	cout<<"NO\n";
}
	return 0;
}
