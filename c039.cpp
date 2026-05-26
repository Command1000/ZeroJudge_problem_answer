#include <bits/stdc++.h>
using namespace std;
int main(void){
int i,j;

while(cin>>i>>j){
int maxx=-2147483648;
int mi=min(i,j);
int Mi=max(i,j);
if(i==1&&j==1){
	maxx=1;
}
	for(int k=mi;k<=Mi;k++){
		int logx=k;
		int ct=1;
		while(logx!=1){
			ct++;
			if(logx&1){
				logx=logx*3+1;
			}
			else{
				logx=logx/2;
			}
			if(ct>maxx){
				maxx=ct;
			}
		}
	}
cout<<i<<" "<<j<<" "<<maxx<<'\n';
}
	return 0;
}
